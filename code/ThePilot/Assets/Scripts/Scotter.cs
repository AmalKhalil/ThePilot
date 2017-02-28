using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;

public class Scotter {

	private float velocity;
	private float steeringAngle;
	private float brakeTorque;

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
}
