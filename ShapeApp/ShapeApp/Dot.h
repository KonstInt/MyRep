#ifndef Class_point
#define Class_point

#include <iostream>
#include <ctime>
#include <time.h>
using namespace std;

class Dot
{

public:
	int x, y;
	



public:
	Dot(int x1=0, int y1=0);
	Dot(Dot& n);

	double L(Dot xy2)
	{
		return sqrt(abs((pow((this->x - xy2.x), 2) + pow((this->y - xy2.y), 2))));
	}





	~Dot();
};

#endif 