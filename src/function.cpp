#include "function.h"

int Check (int D)
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
int Disc(int a,int b, int c)
{
	int D = (b*b) - (4 * a * c);
	return D;
}
