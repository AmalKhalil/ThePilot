using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityStandardAssets.Characters.ThirdPerson;

public class PlayerCharacter : ThirdPersonCharacter {

	public GameObject m_scooter;
	private float time =  10;


	public bool MoveToScooter(Vector3 pCameraForward){
		Vector3 target = m_scooter.transform.position;
		Vector3 move = Vector3.MoveTowards (this.transform.position, target, 2f) - this.transform.position ;
		this.Move (move , false, false);

		float distance = Vector3.Distance (transform.position, target);
		if (distance <= 2f) {
			return true;
		} else {
			return false;
		}

	}

	public void JumpOnScooter(Vector3 pCameraForward){

		//Look to Camera
		this.transform.LookAt (pCameraForward);

		//Set Scooter as parent
		transform.parent = m_scooter.transform;

		//Change Capsule 
		this.m_Capsule.height = this.m_Capsule.height / 4f;
		this.m_Capsule.center =  this.m_Capsule.center - (Vector3.up * 0.3f) ;

		//Ride scooter
		this.transform.position = m_scooter.GetComponent<Scooter>().getSeatWaypoint().transform.position;

		this.m_Animator.SetBool("Riding", true);
		this.m_Rigidbody.constraints = RigidbodyConstraints.FreezePosition; 
	}

	public void JumpOffScooter(){
		/*if(this.m_Rigidbody != null)
			this.m_Rigidbody.constraints = RigidbodyConstraints.None; 
		transform.parent = null;
		this.m_Animator.SetBool("Riding", false);*/

	}

	public bool isOnSeat(){
		return true;
	}


}
