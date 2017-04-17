using UnityEngine;
using UnityEditor;
using System.Collections;

public class ReplaceGameObjects : ScriptableWizard
{
	public bool copyValues = true;
	public GameObject NewType;
	public GameObject [] parentObjs;

	[MenuItem("Custom/Replace GameObjects")]


	static void CreateWizard()
	{
		ScriptableWizard.DisplayWizard("Replace GameObjects", typeof(ReplaceGameObjects), "Replace");
	}

	void OnWizardCreate()
	{
		foreach (GameObject parentObj in parentObjs) {
			replaceRoad (parentObj);
		}
	

	}

	void replaceRoad(GameObject parentObj)
	{
		Transform [] children = parentObj.GetComponentsInChildren<Transform>();
		foreach (Transform t in children)
		{
			if(t.name.StartsWith("road_straight"))
			{
				GameObject go = t.gameObject;
				GameObject newObject;
				newObject = (GameObject)EditorUtility.InstantiatePrefab(NewType);
				newObject.transform.position = go.transform.position;
				newObject.transform.rotation = go.transform.rotation;
				newObject.transform.parent = go.transform.parent;
				newObject.name = go.name;
				newObject.transform.localScale = go.transform.localScale;

				DestroyImmediate(go);
			}
		}
	}
}