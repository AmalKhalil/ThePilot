using UnityEngine;
using UnityStandardAssets.CrossPlatformInput;

using System;

[RequireComponent(typeof (Scooter))]
public class ScotterController : MonoBehaviour
{

	public float steerMax = 30f;
	public float motorMax = 800f;
	public float brakeMax = 80000f;

	public float steerStep = 5f;
	public float motorStep = 800f;
	public float brakeStep = 8000f;

	public bool moveOnStart = true;
	public float intialMotorTorque = 2000f;

	public WheelCollider frontWheel;
	public WheelCollider rearWheel;
	public GameObject [] stearingParts;

	private Scooter scotter;

	private Rigidbody scotterRigidbody;
	private GameManager gameManager;
	private GameObject speedButton;

	void Start ()
	{
		gameManager = GameObject.FindGameObjectWithTag ("GameController").GetComponent<GameManager> ();
		scotterRigidbody = GetComponent<Rigidbody> ();
		scotterRigidbody.centerOfMass = new Vector3 (0f, - 0.05f, 0f);
		scotter = GetComponent<Scooter> ();
		scotter.setRigidbody (scotterRigidbody);
		scotter.setFrontWheel (frontWheel);
		speedButton = GameObject.FindGameObjectWithTag ("SpeedButton");
		if (speedButton != null) {
			speedButton.SetActive (false);
		}
	}

	void FixedUpdate ()
	{
		if (scotter != null && scotter.hasRider ()) {

			if (speedButton != null && ! speedButton.activeSelf) {
				speedButton.SetActive (true);
			}

			AllowRotation ();

			if (moveOnStart)
				MoveForward (intialMotorTorque);

			//Get Input
			Vector3 input = GetMoveInput ();

			if (CrossPlatformInputManager.GetButtonDown ("Speed")) {
				HandleGasPush (1f);
			} else {
				HandleGasPush (input.z);

			}
			HandleSteerRotation (input.x);
		} 	
	}
		

	void OnCollisionEnter (Collision collision)
	{
		if (collision.gameObject.tag.Equals("DeathZone") | !IsGrounded ()) {
			gameManager.LevelLost ();
			//DestroyObject (gameObject);
		}
	}

	private void AllowRotation ()
	{
		scotterRigidbody.constraints = RigidbodyConstraints.FreezeRotationZ;
	}

	private void StopRotation ()
	{
		scotterRigidbody.constraints = RigidbodyConstraints.FreezeRotationZ;
	}



	private Vector3 GetMoveInput ()
	{
		return new Vector3 {
			x = CrossPlatformInputManager.GetAxis ("Horizontal"),
			y = 0,
			z = CrossPlatformInputManager.GetAxis ("Vertical")
		};

	}

	private void HandleGasPush (float push)
	{
		float forward = Mathf.Clamp(push, -1, 1);
		//Change motor torque for rear wheel
		float torque = forward * motorStep;
		if (forward > 0) 
		{
			//Change motor torque for rear wheel
			MoveForward (torque);
		} 
		/*else 
		{
			// Add brake force
			rearWheel.brakeTorque = frontWheel.brakeTorque = forward * brakeMax * -1;

			if (scotter.getVelocityInKm () == 0)
				StopRotation ();
		}*/

	}

	private void MoveForward (float torque)
	{
		rearWheel.motorTorque = torque;
	}
		
	private void HandleSteerRotation (float angle)
	{
		float steer = Mathf.Clamp(angle, -1, 1);
		float steerAngle = steer * steerStep;
		frontWheel.steerAngle = steerAngle;
		RotateSteerVisually (steerAngle);
	}
		
		
	private void RotateSteerVisually (float angle)
	{
			for(int i = 0; stearingParts != null && i < stearingParts.Length ; i++){
				Transform stearingTrans = stearingParts[i].transform;
				stearingTrans.localEulerAngles = new Vector3 (stearingTrans.localEulerAngles.x, angle, stearingTrans.localEulerAngles.z);
			}
	}


	private Boolean IsGrounded ()
	{
		return rearWheel.isGrounded;
	}
}
