using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using System.Collections;
using System;

public class GameManager : MonoBehaviour {

	// static reference to game manager so can be called from other scripts directly (not just through gameobject component)
	public static GameManager instance = null;
	public int noOfLifes = 3;

	public bool levelInProgress = false;
	public int lifes;

	// set things up here
	void Awake () {
		
		//Check if instance already exists
		if (instance == null) {
			instance = this;
			DontDestroyOnLoad (gameObject);
		} else if (instance != this) {
			Destroy (gameObject); 
		}
		this.InitGame ();

	}

	void InitGame(){
		this.lifes = noOfLifes;
		this.levelInProgress = true;	
	}
		



	public void LevelLost(){
		if (this.levelInProgress) {
			if (this.lifes > 0) {
				this.levelInProgress = false;
				this.lifes = this.lifes-1;
				getLevelManager().LevelLost ();
				this.Invoke ("NewGame", 2);
			}
			else
			{
				getLevelManager().GameOver();
			}
		}

	}
		

	private LevelManager getLevelManager(){

		return GameObject.FindGameObjectWithTag ("LevelManager").GetComponent<LevelManager> ();
	}

	private void NewGame(){
		SceneManager.LoadScene (SceneManager.GetActiveScene ().name);
		this.levelInProgress = true;
	}


}
