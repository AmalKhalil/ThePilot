using UnityEngine;
using UnityStandardAssets.CrossPlatformInput;

using System;

[RequireComponent(typeof (Scooter))]
public class ScotterController : MonoBehaviour
{

	public float steerMax = 20f;
	public float motorMax = 800f;
	public float brakeMax = 8000f;

	public WheelCollider frontWheel;
	public WheelCollider rearWheel;
	public GameObject stearing;

	private float lowVelocity = 10;
	private Scooter scotter;

	private Rigidbody scotterRigidbody;
	private GameManager gameManager;

	void Start ()
	{
		this.gameManager = GameObject.FindGameObjectWithTag ("GameController").GetComponent<GameManager> ();
		this.scotterRigidbody = this.GetComponent<Rigidbody> ();
		this.scotterRigidbody.centerOfMass = new Vector3 (0f, - 0.05f, 0f);
		this.scotter = this.GetComponent<Scooter> ();
		this.scotter.setRigidbody (this.scotterRigidbody);
		this.scotter.setFrontWheel (this.frontWheel);
	}

	void FixedUpdate ()
	{
		if (this.scotter != null && this.scotter.hasRider ()) {

			AllowRotation ();

			//Get Input
			Vector3 input = GetMoveInput ();

			HandleGasPush (input.z);
			HandleSteerRotation (input.x);
			HandleBrakePush ();
		} 	
	}
		

	void OnCollisionEnter (Collision collision)
	{
		if (collision.gameObject.tag.Equals("DeathZone") || this.IsGrounded () == false) {
			this.gameManager.LevelLost ();
			//DestroyObject (this.gameObject);
		}
	}

	private void AllowRotation ()
	{
		this.scotterRigidbody.constraints = RigidbodyConstraints.FreezeRotationZ;
	}

	private void StopRotation ()
	{
		this.scotterRigidbody.constraints = RigidbodyConstraints.FreezeRotationZ;
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
		rearWheel.motorTorque = forward * motorMax;


	}
		
	private void HandleSteerRotation (float angle)
	{
		float steer = (float) Math.Round (angle);

		if (this.scotter.getVelocityInKm () > lowVelocity)
			steer = steer / 10;

		this.frontWheel.steerAngle = steer * steerMax;
		RotateSteerVisually ();
	}


	private void HandleBrakePush ()
	{
		if (this.scotter.getVelocity() != 0 && this.IsBrakePressed ()) {
			this.rearWheel.brakeTorque = this.brakeMax;
			this.frontWheel.brakeTorque = this.brakeMax;

			if (this.scotter.getVelocityInKm () == 0)
				this.StopRotation ();
		}

		if (this.IsBrakeRelease ()) {
			this.rearWheel.brakeTorque = 0;
			this.frontWheel.brakeTorque = 0;
		}

	}
		
	private void RotateSteerVisually ()
	{
		if (stearing != null) {
			Transform stearingTrans = stearing.transform;
			stearingTrans.localEulerAngles = new Vector3 (stearingTrans.localEulerAngles.x, frontWheel.steerAngle, stearingTrans.localEulerAngles.z);
			//stearingTrans.Rotate (0, frontWheel.rpm / 60 * 360 * Time.deltaTime, 0);
		}
	}


	private Boolean IsBrakePressed ()
	{
		return Input.GetKey (KeyCode.Space);
	}

	private Boolean IsBrakeRelease ()
	{
		return Input.GetKeyUp (KeyCode.Space);
	}

	private Boolean IsGrounded ()
	{
		return this.rearWheel.isGrounded;
	}
}
