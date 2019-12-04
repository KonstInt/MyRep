#include <iostream>
#include "Dot.h";
#include "Triangle.h"
#include <time.h>
int main()
{
	

	
	system("pause");
	Dot point(0,0);
	Dot point2(4,0);
	Dot point3(4,2);

	
	Triangle SuperTr(point, point2, point3);
	for (int i = 0; i < 50000; ++i)
	{
		cout << SuperTr.S() << endl;
	}
	
}
