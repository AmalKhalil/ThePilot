using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TrafficColor {

	public enum Color {
		Green, Yellow, Red
	}

	public enum Type {
		Car, Human
	}

	public static int getValue(Color pColor){
		int stateValue = 1;

		if (Color.Yellow.Equals (pColor)) {
			stateValue = 2;
		} else if (Color.Red.Equals (pColor)) {
			stateValue = 3;
		}
		return stateValue;
	}

	public static Color getNext(Color pCurrentColor, Color pOldColor){
		Color result = Color.Yellow;
		if (Color.Yellow.Equals (pCurrentColor) && Color.Red.Equals (pOldColor)) {
			result = Color.Green;
		} else if (Color.Yellow.Equals (pCurrentColor) && Color.Green.Equals (pOldColor)) {
			result = Color.Red;
		}
		return result;
	}

	public static Color getOppisit(Color pColor){
		Color result = Color.Yellow;
		if (Color.Red.Equals (pColor)) {
			result = Color.Green;
		} else if (Color.Green.Equals (pColor)) {
			result = Color.Red;
		}
		return result;
	}

}
