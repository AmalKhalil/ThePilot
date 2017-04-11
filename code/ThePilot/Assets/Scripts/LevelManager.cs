using UnityEngine;
using UnityEngine.AI;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using System.Collections;
using System;

public class LevelManager : MonoBehaviour {

	public Address.Area area = Address.Area.Tahrir;

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
		if(this.playAgain != null)
			this.playAgain.SetActive(false);
		
		this.GenerateAddress (area);
		if(this.address != null){
			this.addressText.text =  "Mr. John Smith \n" + this.address.no + ", " + this.address.street + " - " + this.address.area;
			this.DrawGPSRoute ();
		}
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

			if (this.destination != null) {
				float distance = Vector3.Distance (this.scooter.transform.position, this.destination.transform.position);
				//Debug.Log ("Distance to target : "+distance);
				if (distance < 25 & this.scooter.getVelocityInKm () < 20) {
					this.addressText.text = "You are there. Congratulation!!!";
					this.addressText.color = Color.red;
					this.playAgain.SetActive (true);
				}
			}


		}
	}

	public void LevelLost(){
			this.addressText.text = "Oooops, You Lost!";
			this.addressText.color = Color.red;
			this.playerCharacter.JumpOffScooter();
	}

	public void GameOver(){
		showMessage ("GameOver!");
		this.playAgain.SetActive (true);
	}

	public void showMessage(String message){
		this.addressText.text = message;
		this.addressText.color = Color.red;
	}

	private void GenerateAddress(Address.Area pArea){
		Address [] buildings = (Address [])GameObject.FindObjectsOfType (typeof(Address));
		float length = (float) buildings.Length;
		while (length != 0 && this.address == null) {
			int record = (int)UnityEngine.Random.Range (0f, length);
			if (buildings [record].area.Equals (pArea)) {
				this.address = buildings [record];
				this.destination = this.address.gameObject;
			}
		}

	}

	private void DrawGPSRoute(){
		NavMeshPath path = new NavMeshPath();
		NavMesh.CalculatePath(this.scooter.gameObject.transform.position, this.destination.transform.position, 1, path);
		LineRenderer line = this.gameObject.AddComponent<LineRenderer>();;
		line.material = new Material( Shader.Find( "Sprites/Default" ) ) { color = Color.yellow };
		line.startWidth = 5f;
		line.endWidth =5f;
		line.startColor = Color.yellow;
		line.startColor = Color.yellow;
		line.numPositions = path.corners.Length;
		for (int i = 0; i < path.corners.Length; i++) {
			line.SetPosition(i, path.corners[i]);
			//Debug.DrawLine (path.corners [i], path.corners [i + 1], Color.red);
		}
	}


}
