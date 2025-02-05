#include "GroundSquare.h"

GroundSquare::GroundSquare()
{
	setAll("Plain", 0, 0);
}

void GroundSquare::setAll(string temp1, int temp2, int temp3)
{
	setType(temp1);
	setXCoord(temp2);
	setYCoord(temp3);
}

void GroundSquare::setType(string newType)
{
	type = newType;
}

void GroundSquare::setXCoord(int newXCoord)
{
	if( (newXCoord>=0)&&(newXCoord<=1000) )
		xCoord=newXCoord;
	else
		xCoord=0;
}

void GroundSquare::setYCoord(int newYCoord)
{
	if( (newYCoord>=0)&&(newYCoord<=1000) )
		yCoord = newYCoord;
	else
		yCoord=0;
}

void GroundSquare::incrementXCoordBy(int newXCoord)
{
	if( (getXCoord()+newXCoord>=0)&&(getXCoord()+newXCoord<=1000) ) 
		setXCoord(getXCoord() + newXCoord);
}

void GroundSquare::incrementYCoordBy(int newYCoord)
{
	if( (getYCoord()+newYCoord>=0)&&(getYCoord()+newYCoord<=1000) )
		setYCoord(getYCoord() + newYCoord);
}

string GroundSquare::getType() const
{
	return type;
} 

int GroundSquare::getXCoord() const
{
	return xCoord;
}

int GroundSquare::getYCoord() const
{
	return yCoord;
}  

void GroundSquare::print() const
{
	cout<< getType() <<endl;
	cout<< getXCoord() <<endl;
	cout<< getYCoord() <<endl;
}


