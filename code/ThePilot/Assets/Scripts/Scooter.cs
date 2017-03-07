using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;

public class Scooter : MonoBehaviour{

	public GameObject SeatWaypoint;
	private float velocity;
	private float steeringAngle;
	private float brakeTorque;
	private bool hasRiderOnIt= false;

	public float getVelocity ()
	{
		return this.velocity;
	}

	public double getVelocityInKm ()
	{
		return getVelocity () * 3.6;
	}

	public float getSteerAngle ()
	{
		return this.steeringAngle;
	}

	public float getBrakeTorque ()
	{
		return this.brakeTorque;
	}

	public GameObject getSeatWaypoint ()
	{
		return this.SeatWaypoint;
	}

	public bool hasRider ()
	{
		return this.hasRiderOnIt;
	}
		
	public void setVelocity (float pVelocity)
	{
		this.velocity = pVelocity;
	}

	public void setSteerAngle (float pSteerAngle)
	{
		this.steeringAngle =pSteerAngle;
	}

	public void setBrakeTorque (float pBrakeTorque)
	{
		this.brakeTorque =pBrakeTorque;
	}

	public void sethasRider (bool pHasRider)
	{
		this.hasRiderOnIt = pHasRider;
	}
}
