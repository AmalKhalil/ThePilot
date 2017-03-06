using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityStandardAssets.Characters.ThirdPerson;

public class PlayerCharacter : ThirdPersonCharacter {

	public void Ride(GameObject scooter, Vector3 cameraForward){

		//Change Capsule 
		m_Capsule.height = m_Capsule.height / 4f;
		m_Capsule.center =  m_Capsule.center - (Vector3.up * 0.3f) ;

		//Ride the scooter
		transform.parent = scooter.transform;
		transform.position = scooter.transform.position +
			(Vector3.up * 1f) +
			(Vector3.right * - 0.4f) + 
			(Vector3.forward * 0.23f);


		this.m_Animator.SetBool("Riding", true);
		//m_Animator.SetFloat("Ride", 0, 0, Time.deltaTime);
		this.m_Rigidbody.constraints = RigidbodyConstraints.FreezePosition;
	}


}
