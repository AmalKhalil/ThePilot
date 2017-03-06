using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using System.Collections;
using System;

public class GameManager : MonoBehaviour {

	// static reference to game manager so can be called from other scripts directly (not just through gameobject component)
	public static GameManager gm;

	public int noOfLifes = 3;

	public GameObject mainCamera;

	public GameObject scotterObject;
	public GameObject destination;

	public Text speedText;
	public Text addressText;
	public Text brakeText;
	public Text noOfLivesText;

	public GameObject playAgain;

	private Scotter scooter;
	private Boolean isPlaying = true;
	private int lifes;

	// set things up here
	void Awake () {
		// setup reference to game manager
		if (gm == null)
			gm = this.GetComponent<GameManager>();

		this.scooter = scotterObject.GetComponent<Scotter> ();
		this.lifes = noOfLifes;
		this.noOfLivesText.text = "Lifes :" + this.lifes;
	}
		
	// Update is called once per frame
	void Update () {
		if (isPlaying) {
			speedText.text = Math.Round (scooter.getVelocityInKm ()) + " KM/H";
			if (scooter.getBrakeTorque () > 0) {
				brakeText.text = "Brake On";
				brakeText.color = Color.red;
			} else {
				brakeText.text = "Brake Off";
				brakeText.color = Color.white;
			}
		}
		float distance = Vector3.Distance (this.scooter.transform.position, this.destination.transform.position);

		if (distance < 25 & this.scooter.getVelocityInKm() < 20) {
			this.addressText.text = "You are there. Congratulation!!!";
			this.addressText.color = Color.red;
			this.playAgain.SetActive (true);
		}
			

	}


	public void damage(){
		//if (this.lifes > 0) {
			this.addressText.text = "Oooops, You Lost!";
			this.addressText.color = Color.red;
			this.lifes = this.lifes-1;
			this.noOfLivesText.text = "Lifes :" + this.lifes;
			this.playAgain.SetActive (true);
		//	this.Invoke ("reLoadGame", 2);
		/*}
		else
		{
			gameOver();
		}*/
	}
	public void gameOver(){
		Debug.logger.Log ("Game Over !!!!!");
		isPlaying = false;
		this.addressText.text = "GameOver!";
		this.addressText.color = Color.red;
	}

	public void reLoadGame(){
		SceneManager.LoadScene (SceneManager.GetActiveScene ().name);
	}


}
