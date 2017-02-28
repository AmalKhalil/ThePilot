using System;
using UnityEngine;
using UnityEngine.SceneManagement;

public class Conversation : MonoBehaviour {

	public GameObject actor1;
	public GameObject actor2;
	public int interval = 2;
	public bool isAuto = false;

	private DialogBubble talker;
	private DialogBubble listener;
	private int numberOfCalls = 0;
	private int totalNumberofBubbles = 0;
	// Use this for initialization
	void Start () {
		talker = actor1.GetComponent<DialogBubble> ();
		listener = actor2.GetComponent<DialogBubble> ();
		totalNumberofBubbles = talker.vBubble.Count + listener.vBubble.Count;
		if(isAuto == true)
			nextMessage ();
	}
	


	void nextMessage(){
		if (talker.vBubble.Count > 0) {
			talker.ShowBubble (talker);
			numberOfCalls = numberOfCalls + 1;
			if (numberOfCalls < totalNumberofBubbles) {
				switchConversation ();
				Invoke ("nextMessage", interval);
			} 
			else 
			{
				Invoke ("loadNextLevel", interval);
			}
		}
	}

	void switchConversation(){
		DialogBubble temp = talker;
		talker = listener;
		listener = temp;
	}

	void loadNextLevel(){
		loadLevel ("Level1");
	}
	// load the specified Unity level
	public void loadLevel(string leveltoLoad)
	{
		// load the specified level
		SceneManager.LoadScene (leveltoLoad);
	}
}
