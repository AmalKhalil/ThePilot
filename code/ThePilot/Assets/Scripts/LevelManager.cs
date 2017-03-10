using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using System.Collections;
using System;

public class LevelManager : MonoBehaviour {

	private GameObject destination;
	private Address address;

	private GameManager gameManager;

	private Scooter scooter;
	private PlayerCharacter playerCharacter;
	private Text speedText;
	private Text addressText;
	private Text brakeText;
	private Text noOfLivesText;
	private GameObject playAgain;

	// Use this for initialization
	void Start () {
		gameManager = GameManager.instance;
		this.scooter = GameObject.FindGameObjectWithTag ("Scooter").GetComponent<Scooter> ();
		this.playerCharacter = GameObject.FindGameObjectWithTag ("Player").GetComponent<PlayerCharacter> ();
		this.speedText = GameObject.FindGameObjectWithTag ("SpeedMonitor").GetComponent<Text> ();
		this.addressText = GameObject.FindGameObjectWithTag ("Address").GetComponent<Text> ();
		this.brakeText = GameObject.FindGameObjectWithTag ("BrakeMonitor").GetComponent<Text> ();
		this.noOfLivesText = GameObject.FindGameObjectWithTag ("Lives").GetComponent<Text> ();
		this.playAgain = GameObject.FindGameObjectWithTag ("PlayAgain");
		this.noOfLivesText.text = "Lifes :" + gameManager.getCurrentLives();

		generateAddress ();
		this.addressText.text =  "Mr. John Smith \n" + this.address.no + ", " + this.address.Street + " - " + this.address.area;

	}
	
	// Update is called once per frame
	void Update () {
		if (gameManager.isLevelInProgress()) {
			this.speedText.text = Math.Round (this.scooter.getVelocityInKm ()) + " KM/H";
			if (this.scooter.getBrakeTorque () > 0) {
				this.brakeText.text = "Brake On";
				this.brakeText.color = Color.red;
			} else {
				this.brakeText.text = "Brake Off";
				this.brakeText.color = Color.white;
			}

			float distance = Vector3.Distance (this.scooter.transform.position, this.destination.transform.position);

			if (distance < 25 & this.scooter.getVelocityInKm () < 20) {
				this.addressText.text = "You are there. Congratulation!!!";
				this.addressText.color = Color.red;
				this.playAgain.SetActive (true);
			}

		}
	}

	public void LevelLost(){
			this.playerCharacter.JumpOffScooter();
			this.addressText.text = "Oooops, You Lost!";
			this.addressText.color = Color.red;
	}

	public void GameOver(){
		showMessage ("GameOver!");
		this.playAgain.SetActive (true);
	}

	public void showMessage(String message){
		this.addressText.text = message;
		this.addressText.color = Color.red;
	}

	private void generateAddress(){
		Address [] buildings = (Address [])GameObject.FindObjectsOfType (typeof(Address));
		float length = (float)buildings.Length;
		this.address = buildings [(int)UnityEngine.Random.Range (0f, length)];
		this.destination = this.address.gameObject;
	}
}
