using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TrafficStopController : MonoBehaviour {

	public Mode mode = Mode.Automatic;
	public TrafficColor.Color color;
	public int timer = 20;
	public int switchTimer = 5;

	private DigitController digit1;
	private DigitController digit2;
	private TrafficLightController trafficLight;
	private int counter = 20;
	private TrafficColor.Color oldColor;


	public enum Mode {
		Automatic
	}
	// Use this for initialization
	void Start () {
		DigitController [] digitControllers = this.GetComponentsInChildren<DigitController> ();
		if (digitControllers != null && digitControllers.Length == 2) {
			this.digit1 = digitControllers [0];
			this.digit2 = digitControllers [1];
		} else {
			Debug.LogWarning ("Digits are missing");
		}

		this.trafficLight = this.GetComponentInChildren<TrafficLightController> ();
		
		this.counter = this.timer;
		this.InvokeRepeating ("DecreaseCounter",1,1);

	}

	// Update is called once per frame
	void Update () {
		if (digit1 != null && digit2 != null) {
			this.digit1.color = this.color;
			this.digit2.color = this.color;
			this.digit1.number = this.counter/ 10 ;
			this.digit2.number = this.counter % 10;
		}

		if (this.trafficLight != null) {
			this.trafficLight.color = this.color;
		}

	}

	private void DecreaseCounter(){
		
		if (this.counter == this.timer) {
			EventManager.TriggerEvent (EventManager.FormateEventName(this.gameObject,"Car", this.color.ToString()));
			EventManager.TriggerEvent (EventManager.FormateEventName(this.gameObject,"Human", TrafficColor.getOppisit(this.color).ToString()));
		}

		if (this.counter > 0)
			this.counter = this.counter - 1;
		else {
			TrafficColor.Color temp = this.color;
			this.color = TrafficColor.getNext (this.color, this.oldColor);
			this.oldColor = temp;


			if(TrafficColor.Color.Yellow.Equals(this.color))
				this.counter = this.switchTimer;
			else	
				this.counter = this.timer;
		}
	}
}
