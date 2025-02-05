#include <cstdlib>
#include <ctime>
using namespace std;

#include "GroundSquare.h"
#include "Vehicle.h"

GroundSquare movement(GroundSquare start, Vehicle veh)
{
	GroundSquare new_obj;

	srand(time(NULL));
	unsigned random = rand()%4;

	switch(random)
	{
		case 0:	{	
					new_obj.setXCoord(start.getXCoord());	
					new_obj.setYCoord(veh.getSpeed() + start.getYCoord());
					break;	
				}

		case 1:	{	
					new_obj.setXCoord(0.5*veh.getSpeed() + start.getXCoord());
					new_obj.setYCoord(0.5*veh.getSpeed() + start.getYCoord());
					break;	
				}

		case 2:	{	
					new_obj.setXCoord(veh.getSpeed() + start.getXCoord());
					new_obj.setYCoord(start.getYCoord());
					break;	
				}

		case 3:	{	
					new_obj.setXCoord(0.5*veh.getSpeed() + start.getXCoord());
					new_obj.setYCoord( (-0.5)*veh.getSpeed() + start.getYCoord() );
					break;	
				}
				
		//default:{	break;	} δε χρειάζεται
	}

	return new_obj;
}

int main()
{
	GroundSquare g1, g2;

	cout<<"Constructing OBJECT GroundSquare1\n";
	cout<<"---------------------------------\n";
	g1.print();
	cout<<"\n";
	
	cout<<"Constructing OBJECT GroundSquare2\n";
	cout<<"---------------------------------\n";
	g2.print();
	cout<<"\n";
	
	g1.setAll("COACH1", 1, 1000);
	
	g1.incrementXCoordBy(2500); //δε θα το αυξήσει

	g2.setAll("COACH2", 1001, 2);
	
	g2.incrementYCoordBy(500); //θα το αυξήσει

	cout<<"New values for OBJECT GroundSquare1\n";
	cout<<"------------------------\n";
	g1.print();
	cout<<"\n";
	
	cout<<"New values for OBJECT GroundSquare2\n";
	cout<<"------------------------\n";
	g2.print();
	cout<<"\n";
	
	Vehicle v("Recon", 44, 7, 9, 6);
	cout<<"Constructing OBJECT Vehicle\n";
	cout<<"------------------\n";
	v.print();
	cout<<"\n";
	v.setAll("Recon", 32, 7, 10, 8);
	cout<<"NEW values for OBJECT Vehicle\n";
	cout<<"------------------\n";
	v.print();
	cout<<"\n";

	g2 = movement(g1, v);

	cout<<"Combinational OBJECT\n";
	cout<<"--------------------\n";
	g2.print();
	cout<<"\n";

	system("PAUSE");
	return 0;
}
