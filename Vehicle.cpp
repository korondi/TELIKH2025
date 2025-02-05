#include "Vehicle.h"

Vehicle::Vehicle(string temp1, int temp2, int temp3, int temp4, int temp5)
{
	setAll(temp1, temp2, temp3, temp4, temp5);	
}

void Vehicle::setAll(string temp1, int temp2, int temp3, int temp4, int temp5)
{
	setId(temp1); 
	setSpeed(temp2); 
	setAttack(temp3); 
	setDefense(temp4); 
	setRange(temp5);  	
}

void Vehicle::setId(string id)
{
	if ( (id=="Recon") || (id=="Light") || (id=="Medium") || (id=="Heavy") )  
		this->id = id;
	else 
		id = "\0";
}
 
void Vehicle::setSpeed(int speed)
{
	if ( (speed>=30) && (speed<=100) ) 
		this->speed = speed;
	else 
		speed = 30;
}
  
void Vehicle::setAttack(int attack)
{
	if  ( (attack>=1) && (attack<=10) ) 
		this->attack = attack;
	else 
		attack = 1;
}
  
void Vehicle::setDefense(int defense)
{
	if  ( (defense>=1) && (defense<=20) ) 
		this->defense = defense;
	else 
		defense = 1;
}
  
void Vehicle::setRange(int range)
{
	if  ( (range>=1) && (range<=6) ) 
		this->range = range;
	else
		range = 1;
}
  
string Vehicle::getId() const
{
	return id;
}
 
int Vehicle::getSpeed() const
{
	return speed;
}
  
int Vehicle::getAttack() const
{
	return attack;
}
  
int Vehicle::getRange() const
{
	return range;
}
 
int Vehicle::getDefense() const
{
	return defense;
}

void Vehicle::print() const
{
	cout<<getId() <<endl; 
	cout<<getSpeed() <<endl; 
	cout<<getAttack() <<endl;
	cout<<getDefense() <<endl;
	cout<<getRange() <<endl; 
}
