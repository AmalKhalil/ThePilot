using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TrafficLightController : MonoBehaviour {

	public State state;

	private Animator animator;

	public enum State {
		Green, Yellow, Red
	}
	// Use this for initialization
	void Start () {
		this.animator = GetComponent<Animator> ();
	}
	
	// Update is called once per frame
	void Update () {
		int stateValue = 1;

		if (State.Yellow.Equals (this.state)) {
			stateValue = 2;
		} else if (State.Red.Equals (this.state)) {
			stateValue = 3;
		}
		this.animator.SetInteger ("State", stateValue);
	}
}
