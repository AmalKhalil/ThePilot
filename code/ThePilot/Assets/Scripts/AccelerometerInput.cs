using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityStandardAssets.CrossPlatformInput;

public class AccelerometerInput : MonoBehaviour {

	private CrossPlatformInputManager.VirtualAxis steerAxis;
	private CrossPlatformInputManager.VirtualAxis gasAxis;

	// Use this for initialization
	void Start () {
		steerAxis = getAxisOrCreate ("Horizontal");
		gasAxis = getAxisOrCreate("Vertical");
	}
	
	// Update is called once per frame
	void Update () {
		float x = Input.acceleration.x;
		float z = -Input.acceleration.z;

		steerAxis.Update (x);
		gasAxis.Update (z);
	}

	private CrossPlatformInputManager.VirtualAxis getAxisOrCreate(string name){
		CrossPlatformInputManager.VirtualAxis axis = CrossPlatformInputManager.VirtualAxisReference (name);
		if (axis == null) {
			axis = new CrossPlatformInputManager.VirtualAxis (name);
			CrossPlatformInputManager.RegisterVirtualAxis (axis);
		}
		return axis;
	}
}
