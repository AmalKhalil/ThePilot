using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DigitController : MonoBehaviour {

	public int number;
	public Color color;

	public enum Color {
		Green, Yellow, Red
	}

	private Animator animator;
	// Use this for initialization
	void Start () {
		this.animator = GetComponent<Animator> ();
	}
	
	// Update is called once per frame
	void Update () {
		this.animator.SetInteger ("number", number);

		int stateValue = 1;

		if (Color.Yellow.Equals (this.color)) {
			stateValue = 2;
		} else if (Color.Red.Equals (this.color)) {
			stateValue = 3;
		}
		this.animator.SetInteger ("color", stateValue);
	}
}
