using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;

public class Scooter : MonoBehaviour{

	public GameObject SeatWaypoint;

	private Rigidbody scotterRigidbody;
	private WheelCollider frontWheel;

	private bool hasRiderOnIt= false;

	public void setRigidbody(Rigidbody mRigidbody){
		this.scotterRigidbody = mRigidbody;
	}

	public void setFrontWheel(WheelCollider mWheel){
		this.frontWheel = mWheel;
	}

	public float getVelocity ()
	{
		return this.scotterRigidbody.velocity.magnitude;
	}

	public double getVelocityInKm ()
	{
		return getVelocity () * 3.6;
	}

	public float getSteerAngle ()
	{
		return this.frontWheel.steerAngle;
	}

	public float getBrakeTorque ()
	{
		return this.frontWheel.brakeTorque;
	}

	public GameObject getSeatWaypoint ()
	{
		return this.SeatWaypoint;
	}

	public bool hasRider ()
	{
		return this.hasRiderOnIt;
	}


	public void sethasRider (bool pHasRider)
	{
		this.hasRiderOnIt = pHasRider;
	}
}
