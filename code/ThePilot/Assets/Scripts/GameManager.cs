using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using System.Collections;
using System;

public class GameManager : MonoBehaviour {

	// static reference to game manager so can be called from other scripts directly (not just through gameobject component)
	public static GameManager instance = null;
	public int noOfLifes = 3;

	private bool levelInProgress = false;
	private int lives;

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
		this.lives = noOfLifes;
		this.levelInProgress = true;	
	}
		



	public void LevelLost(){
		if (this.levelInProgress) {
			if (this.lives > 0) {
				this.levelInProgress = false;
				this.lives = this.lives-1;
				getLevelManager().LevelLost ();
				this.Invoke ("NewGame", 5);
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

	public int getCurrentLives(){
		return this.lives;
	}

	public bool isLevelInProgress(){
		return this.levelInProgress;
	}


}
