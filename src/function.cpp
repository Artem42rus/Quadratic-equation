#include "function.h"

double Check (double D)
{
	if (D == 0) {
		return 0;
	}  else if (D < 0) {
		return 1;
	} else if (D > 0) {
		return 2;
	} else {
	  return 0;
}
}
double Disc(double a,double b, double c)
{
	double D = (b*b) - (4 * a * c);
	return D;
}
