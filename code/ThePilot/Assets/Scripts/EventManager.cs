using UnityEngine;
using UnityEngine.Events;
using System.Collections;
using System.Collections.Generic;


[System.Serializable]
public class SourceEvent : UnityEvent<GameObject>
{
}

public class EventManager : MonoBehaviour {

	private Dictionary <string, SourceEvent> eventDictionary;

	private static EventManager eventManager;

	public static EventManager instance
	{
		get
		{
			if (!eventManager)
			{
				eventManager = FindObjectOfType (typeof (EventManager)) as EventManager;

				if (!eventManager)
				{
					Debug.LogError ("There needs to be one active EventManger script on a GameObject in your scene.");
				}
				else
				{
					eventManager.Init (); 
				}
			}

			return eventManager;
		}
	}

	void Init ()
	{
		if (eventDictionary == null)
		{
			eventDictionary = new Dictionary<string, SourceEvent>();
		}
	}

	public static void StartListening (string eventName, UnityAction<GameObject> listener)
	{
		SourceEvent thisEvent = null;
		if (instance.eventDictionary.TryGetValue (eventName, out thisEvent))
		{
			thisEvent.AddListener (listener);
		} 
		else
		{
			thisEvent = new SourceEvent();
			thisEvent.AddListener (listener);
			instance.eventDictionary.Add (eventName, thisEvent);
		}
	}

	public static void StopListening (string eventName, UnityAction<GameObject> listener)
	{
		if (eventManager == null) return;
		SourceEvent thisEvent = null;
		if (instance.eventDictionary.TryGetValue (eventName, out thisEvent))
		{
			thisEvent.RemoveListener (listener);
		}
	}

	public static void TriggerEvent (GameObject source , string eventName)
	{
		SourceEvent thisEvent = null;
		if (instance.eventDictionary.TryGetValue (eventName, out thisEvent))
		{
			thisEvent.Invoke (source);
		}
	}

	public static string FormateEventName (GameObject source, string param)
	{
		return source.name + "-" + param;
	}

	public static string FormateEventName (GameObject source, string param1, string param2)
	{
		return source.name + "-" + param1 + "-" + param2;
	}

}
