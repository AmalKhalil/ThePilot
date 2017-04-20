using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TrafficLightController : MonoBehaviour {

	public TrafficColor.Color color;
	private Animator animator;


	// Use this for initialization
	void Start () {
		this.animator = GetComponent<Animator> ();

	}
	
	// Update is called once per frame
	void Update () {
		this.animator.SetInteger ("State", TrafficColor.getValue(this.color));
	}
}
