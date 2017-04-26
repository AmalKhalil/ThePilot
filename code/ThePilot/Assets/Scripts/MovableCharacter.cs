using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityStandardAssets.Characters.ThirdPerson;

public class MovableCharacter : ThirdPersonCharacter {

	public GameObject destination;
	public GameObject trigger;

	private Vector3 start = Vector3.zero;
	private Vector3 end = Vector3.zero;
	private bool arrived = false;
	private bool isGreen = false;


	// Update is called once per frame
	void Update () {
		if (this.start.Equals(Vector3.zero)) {
			this.start = this.transform.position;
			this.end = this.destination.transform.position;
			string eventName = EventManager.FormateEventName (trigger, TrafficColor.Type.Human.ToString (), TrafficColor.Color.Green.ToString ());
			EventManager.StartListening (eventName , TrafficSignIsGreen);
		}

		if (this.isGreen && !this.arrived) {
			this.arrived = this.MoveTo (this.end);
		} 
	}

	public bool MoveTo(Vector3 target){
		Vector3 move = Vector3.MoveTowards (this.transform.position, target, this.m_MovingTurnSpeed * Time.fixedDeltaTime) - this.transform.position ;
		this.Move (move , false, false);

		float distance = Vector3.Distance (this.transform.position, target);
		if (distance < 0.3f) {
			m_Animator.SetFloat("Forward", 0f);
			m_Animator.SetFloat("Turn", 0f);
			m_Animator.SetBool("Crouch", false);
			m_Animator.SetBool("OnGround", true);

			return true;
		} else {
			return false;
		}
	}

	public void Reverse(){
		this.arrived = false;
		Vector3 temp = this.start;
		this.start = this.end;
		this.end = temp;
		this.transform.LookAt (this.end);

	}

	public void TrafficSignIsGreen(GameObject source){
		this.isGreen = true;
		if (this.arrived) {
			this.Reverse ();
		}

	}
		

}
