#ifndef GROUNDSQUARE_H
	#define GROUNDSQUARE_H
	#include <iostream>
	#include <string>
	using namespace std;
	
	class GroundSquare
	{
		private:
			string type;
			int xCoord, yCoord;
		
		public:
			GroundSquare();
			void setAll(string, int, int);
			void setType(string);
			void setXCoord(int);
			void setYCoord(int);
			void incrementXCoordBy(int);
			void incrementYCoordBy(int);
			string getType() const;
			int getXCoord() const;
			int getYCoord() const;
			void print() const;
	};
#endif
