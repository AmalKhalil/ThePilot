using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;

public class MovableCar : MonoBehaviour {

	public GameObject destination;

	private Vector3 start = Vector3.zero;
	private Vector3 end = Vector3.zero;
	private NavMeshAgent agent;
	private NavMeshPath path ;
	private bool isStopped = false;
	private GameObject stoppedBy;

	// Use this for initialization
	void Start () {
		this.start = this.transform.position;
		this.end = this.destination.transform.position;
		this.agent = this.GetComponent<NavMeshAgent> ();
		this.agent.SetDestination (this.end);
		TrafficStopController [] controllers= GameObject.FindObjectsOfType<TrafficStopController>();
		foreach(TrafficStopController controller in controllers){
			string eventName = EventManager.FormateEventName (controller.gameObject, TrafficColor.Type.Car.ToString (), TrafficColor.Color.Green.ToString ());
			EventManager.StartListening (eventName , TrafficSignIsGreen);
		}
	}

	void Update () {
		if (!this.isStopped && 
			this.agent.hasPath && 
			this.agent.pathStatus.Equals( NavMeshPathStatus.PathComplete) && 
			this.agent.remainingDistance < 0.5) {
			this.Reset ();
		}
	}

	public void Reset(){
		this.transform.position = this.start;
		this.agent.Warp (this.start);
		this.agent.ResetPath ();
		this.agent.SetDestination (this.end);
	}

	void OnCollisionEnter (Collision collision)
	{
		Debug.Log (collision.collider.name);
		if ("TrafficStop".Equals (collision.collider.tag) && !this.isStopped) {
			this.TrafficSignIsRed (collision.collider.gameObject);
		}
	}

	public void TrafficSignIsRed(GameObject source){
		this.agent.velocity = Vector3.zero;
		this.agent.Stop ();
		this.isStopped = true;
		this.stoppedBy = source;
		this.agent.ResetPath ();

	}

	public void TrafficSignIsGreen(GameObject source){
		if (this.isStopped && source.Equals (this.stoppedBy)) {
			this.isStopped = false;
			this.stoppedBy = null;
			this.agent.SetDestination (this.end);
		}
	}


}
