using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;

public class MovableCar : MonoBehaviour {

	public GameObject destination;

	private Vector3 start = Vector3.zero;
	private Vector3 end = Vector3.zero;
	private bool arrived = false;
	private NavMeshAgent agent;
	private NavMeshPath path ;
	private bool isStopped = false;
	private GameObject stoppedBy;

	// Use this for initialization
	void Start () {
		this.start = this.transform.position;
		this.end = this.destination.transform.position;
		this.agent = this.GetComponent<NavMeshAgent> ();
		this.agent.SetDestination (this.destination.transform.position);
		TrafficStopController [] controllers= GameObject.FindObjectsOfType<TrafficStopController>();
		foreach(TrafficStopController controller in controllers){
			string eventName = EventManager.FormateEventName (controller.gameObject, TrafficColor.Type.Car.ToString (), TrafficColor.Color.Green.ToString ());
			EventManager.StartListening (eventName , TrafficSignIsGreen);
		}
	}

	public void Reverse(){
		this.arrived = false;
		Vector3 temp = this.start;
		this.start = this.end;
		this.end = temp;
		this.transform.LookAt (this.end);

	}

	void OnCollisionEnter (Collision collision)
	{
		if ("TrafficStop".Equals (collision.collider.tag)) {
			this.TrafficSignIsRed (collision.collider.gameObject);
		}
	}

	public void TrafficSignIsRed(GameObject source){
		Debug.Log ("TrafficSignIsRed");
		this.isStopped = true;
		this.stoppedBy = source;
		this.agent.ResetPath ();

	}

	public void TrafficSignIsGreen(GameObject source){
		if (this.isStopped && source.Equals (this.stoppedBy)) {
			Debug.Log ("TrafficSignIsGreen");
			this.isStopped = false;
			this.stoppedBy = null;
			this.agent.SetDestination (this.destination.transform.position);
		}
	}


}
