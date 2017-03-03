using UnityEngine;
using UnityStandardAssets.CrossPlatformInput;

using System;

public class ScotterController : MonoBehaviour
{

	public float motorForce = 800f;
	public float steerForce = 30f;
	public float brakeForce = 120f;
	public float maxLowVelocity = 30;

	public WheelCollider frontWheel;
	public WheelCollider rearWheel;
	public GameObject stearing;

	private Scotter scotter;

	private Rigidbody scotterRigidbody;
	private GameManager gameManager;
	private Boolean hasRider = false;


	void Start ()
	{
		this.gameManager = GameObject.FindGameObjectWithTag ("GameController").GetComponent<GameManager> ();
		this.scotter = this.gameManager.getScotter ();
		this.scotterRigidbody = this.GetComponent<Rigidbody> ();
	}
			
	void FixedUpdate ()
	{
		if (hasRider) {
			Vector3 input = getMoveInput ();
			handleGasPush (input.z);
			handleSteerRotation (input.x);
			handleBrakePush ();
		}	
	}



	void OnCollisionEnter (Collision collision)
	{
		/*if (collision.gameObject.tag == "DeathZone" || this.IsGrounded () == false) {
			Destroy(this);
			this.gameManager.damage ();
		}*/
	}

	private Vector3 getMoveInput ()
	{
		return new Vector3 {
			x = CrossPlatformInputManager.GetAxis ("Horizontal"),
			y = 0,
			z = CrossPlatformInputManager.GetAxis ("Vertical")
		};
	}

	private void handleGasPush (float push)
	{
			applyVelocity (push);
	}

	void rotateSteerVisually ()
	{
		if (stearing != null) {
			Transform stearingTrans = stearing.transform;
			stearingTrans.localEulerAngles = new Vector3 (stearingTrans.localEulerAngles.x, frontWheel.steerAngle, stearingTrans.localEulerAngles.z);
			//stearingTrans.Rotate (0, frontWheel.rpm / 60 * 360 * Time.deltaTime, 0);
		}

	}

	private void handleSteerRotation (float angle)
	{
			applySteerAngle (angle);
			rotateSteerVisually ();
	}


	private void handleBrakePush ()
	{
		if (this.scotter.getVelocity () > 0) {	
			if (this.isBrakePressed ()) {
				applyBrakeForce ();
			}

			if (this.isBrakeRelease ()) {
				this.rearWheel.brakeTorque = 0;
				this.frontWheel.brakeTorque = 0;
				this.scotter.setBrakeTorque (frontWheel.brakeTorque);
			}
		}
	}

	private void applyVelocity (float push)
	{
		//Change motor torque for rear wheel
		if (push != 0 || rearWheel.motorTorque != 0)
			rearWheel.motorTorque = push * motorForce;
		this.scotter.setVelocity (this.scotterRigidbody.velocity.magnitude);
	}

	private void applySteerAngle (float angle)
	{
		if (angle != 0 || frontWheel.steerAngle != 0) {
			if (this.scotter.getVelocityInKm () < maxLowVelocity)
				this.frontWheel.steerAngle = (float)Math.Round (angle * steerForce);
			else
				this.frontWheel.steerAngle = (float)Math.Round (angle * (steerForce / 3));
		}

		this.scotter.setSteerAngle (this.frontWheel.steerAngle);
	}

	private void applyBrakeForce ()
	{
		this.rearWheel.brakeTorque = this.brakeForce;
		this.frontWheel.brakeTorque = this.brakeForce;
		this.scotter.setBrakeTorque (frontWheel.brakeTorque);
		this.scotter.setVelocity (this.scotterRigidbody.velocity.magnitude);
	}


	private Boolean isBrakePressed ()
	{
		return Input.GetKey (KeyCode.Space);
	}

	private Boolean isBrakeRelease ()
	{
		return Input.GetKeyUp (KeyCode.Space);
	}

	private Boolean IsGrounded ()
	{
		return this.rearWheel.isGrounded;
	}
}
