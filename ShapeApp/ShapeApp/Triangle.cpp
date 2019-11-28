#include "Triangle.h"

Triangle::Triangle(Dot xy_1, Dot xy_2, Dot xy_3) : xy1(xy_1), xy2(xy_2), xy3(xy_3) {};


double Triangle::S()
{
	tuple<int, int, int> j = P();

	if (get<0>(j) == get<1>(j) || get<0>(j) == get<2>(j) || get<1>(j) == get<2>(j))
	{
		//return 
	}

	
	double kat = fmin(get<0>(j), get<1>(j));
	double gep = fmax(get<0>(j), get<1>(j));
    double kat2 = fmin(kat, get<2>(j));
	//double gep = fmax(gep, get<2>(j));

	if (pow(gep, 2) == pow(kat, 2) + pow(kat2, 2))
	{
		return (kat * kat2) / 2;

	}

	int p = get<0>(j) + get<1>(j) + get<2>(j);
	return sqrt(p * (p - get<0>(j)) * (p - get<1>(j)) * (p - get<2>(j)));
};
