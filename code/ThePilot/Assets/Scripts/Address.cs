using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Address : MonoBehaviour  {

	public int no;
	public Street street; 
	public Area area;
	public BuildingType buildingType;

	private Customer customer;

	public enum Street 
	{
		FalakyStreet, TalatHarbStreet, ElBustanStreet, KasrElNil, MeretBasha, TahrirStreet, MMSA, SherifBasha, MohamedMahmoud

	}

	public enum Area 
	{
		Tahrir , ZoneARight, ZoneALeft, ZoneC
	}

	public enum BuildingType 
	{
		Flat, Cafe, Motel, FlatLarge, Pharmacy, Shop, GasStation, Skyscraper, Stadium, House, Tramstation, Bank
	}

	public void setCustomer(Customer pCustomer){
		this.customer = pCustomer;
	}

	public Customer getCustomer(Customer pCustomer){
		return this.customer;
	}
		
}
