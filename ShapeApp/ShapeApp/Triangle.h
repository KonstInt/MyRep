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
	
	tuple<double, double, double> P()
	{  
		double a = xy1.L(xy2);
		double b = xy1.L(xy3);
		double c = xy2.L(xy3);

		//cout << a << endl;
		//cout << b << endl;
		//cout << c << endl;
		return make_tuple(a, b, c);

	}

	double S();


};

