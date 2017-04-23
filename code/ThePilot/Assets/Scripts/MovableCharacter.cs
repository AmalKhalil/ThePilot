﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityStandardAssets.Characters.ThirdPerson;

public class MovableCharacter : ThirdPersonCharacter {

	public GameObject destination;
	public GameObject trigger;

	private Vector3 start = Vector3.zero;
	private Vector3 end = Vector3.zero;
	private bool arrived = false;


	// Update is called once per frame
	void Update () {
		if (this.start.Equals(Vector3.zero)) {
			this.start = this.transform.position;
			this.end = this.destination.transform.position;
			EventManager.StartListening (EventManager.FormateEventName(trigger , TrafficColor.Color.Green.ToString()), TrafficSignIsGreen);
		}

		if (!arrived) {
			this.arrived = this.MoveTo (this.end);
		} 
	}

	public bool MoveTo(Vector3 target){
		
		Vector3 move = Vector3.MoveTowards (this.transform.position, target, this.m_MovingTurnSpeed * Time.deltaTime) - this.transform.position ;
		this.Move (move , false, false);

		float distance = Vector3.Distance (this.transform.position, target);

		if (distance < 0.1f) {
			return true;
		} else {
			return false;
		}
	}

	public void Reverse(){
		Debug.Log ("Reversed");
		this.arrived = false;
		Vector3 temp = this.start;
		this.start = this.end;
		this.end = temp;
		this.transform.Rotate (Vector3.down * 180);

	}

	public void TrafficSignIsGreen(){
		if (this.arrived) {
			this.Reverse ();
		}
	}

}
