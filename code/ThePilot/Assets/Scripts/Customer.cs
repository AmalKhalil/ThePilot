using System;
using UnityEngine;

public class Customer : MonoBehaviour {

	public String firstName;
	public String LastName;
	public Gender gender;
	public int age;

	public enum Gender 
	{
		Male, Femal
	}
}
