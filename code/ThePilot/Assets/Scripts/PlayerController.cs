using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityStandardAssets.Characters.ThirdPerson;
using UnityStandardAssets.CrossPlatformInput;

[RequireComponent(typeof (PlayerCharacter))]
public class PlayerController : MonoBehaviour {

	private PlayerCharacter m_Character; // A reference to the ThirdPersonCharacter on the object
	private Transform m_Cam;                  // A reference to the main camera in the scenes transform
	private Vector3 m_CamForward;             // The current forward direction of the camera
	private Vector3 m_Move;
	private bool m_Jump;
	private GameObject scotterObject;
	private Scooter scotter;
	private GameObject jumbButton;

	private void Start()
	{
		this.scotterObject = GameObject.FindGameObjectWithTag ("Scooter");
		this.scotter =  this.scotterObject.GetComponent<Scooter> ();
		this.jumbButton = GameObject.FindGameObjectWithTag ("JumpButton");
		// get the transform of the main camera
		if (Camera.main != null)
		{
			m_Cam = Camera.main.transform;
		}
		else
		{
			Debug.LogWarning(
				"Warning: no main camera found. Third person character needs a Camera tagged \"MainCamera\", for camera-relative controls.", gameObject);
			// we use self-relative controls in this case, which probably isn't what the user wants, but hey, we warned them!
		}

		// get the third person character ( this should never be null due to require component )
		m_Character = GetComponent<PlayerCharacter>();


	}


	private void Update()
	{
		if (!this.scotter.hasRider() && !m_Jump)
		{
			m_Jump = CrossPlatformInputManager.GetButtonDown("Jump");
		}
	}


	// Fixed update is called in sync with physics
	private void FixedUpdate()
	{
		if (this.scotter.hasRider ()) {
			
		} 
		else  
		{
			movePlayer ();
		}

   }

 private void movePlayer ()
{
	// read inputs
	float h = CrossPlatformInputManager.GetAxis ("Horizontal");
	float v = CrossPlatformInputManager.GetAxis ("Vertical");
	if (m_Cam != null) {
		// calculate camera relative direction to move:
		m_CamForward = Vector3.Scale (m_Cam.forward, new Vector3 (1, 0, 1)).normalized;
		m_Move = v * m_CamForward + h * m_Cam.right;
	}
	else {
		// we use world-relative directions in the case of no main camera
		m_Move = v * Vector3.forward + h * Vector3.right;
	}
	#if !MOBILE_INPUT
	// walk speed multiplier
	if (Input.GetKey (KeyCode.LeftShift))
		m_Move *= 0.5f;
	#endif
	// pass all parameters to the character control script
	if (m_Jump) {
		if (this.jumbButton != null) {
				Debug.Log ("jumbButton disabled");

				this.jumbButton.SetActive (false);

		}

		if (m_Character.MoveToScooter (m_CamForward)) {
			m_Character.JumpOnScooter (m_CamForward);
			this.scotter.sethasRider (true);
			m_Jump = false;
		}
	}
	else {
		m_Character.Move (m_Move, false, false);
	}
}

}