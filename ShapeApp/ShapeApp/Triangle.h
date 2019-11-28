#pragma once
#include "Dot.h"
#include <tuple>

class Triangle
{
private:
	Dot xy1;
	Dot xy2;
	Dot xy3;
public:



	Triangle(Dot xy_1, Dot xy_2, Dot xy_3);
	
	tuple<int, int, int> P()
	{  
		int a = xy1.L(xy2);
		int b = xy1.L(xy3);
		int c = xy2.L(xy3);

		
		return make_tuple(a, b, c);

	}

	int S();


};

