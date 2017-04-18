﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DigitController : MonoBehaviour {

	public int number;

	private Animator animator;
	// Use this for initialization
	void Start () {
		this.animator = GetComponent<Animator> ();
	}
	
	// Update is called once per frame
	void Update () {
		this.animator.SetInteger ("number", number);
	}
}
