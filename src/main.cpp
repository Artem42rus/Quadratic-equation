#include <iostream>
#include <cmath>
#include "function.h"
using namespace std;
	
int main ()
{
	int a,b,c;
	int D, i;
	float x, x1, x2;
	cout << "a = ";
	cin >> a;
	cout << "b = ";
	cin >> b;
	cout << "c = ";
	cin >> c;
	
	D = Disc(a,b,c);
	i = Check(D);

	if (i == 0) {
		x = ((-1) * b) / (2 * a);
		cout << "x = " << x << endl;
}   if (i == 1) {
		   cout << "Корня нет!" << endl;
}	if (i == 2) {
		 x1 = ((-1) * b + sqrt(D)) / (2 * a);
			cout << "x1 = " << x1 << endl;
		 x2 = ((-1) * b - sqrt(D)) / (2 * a);
			cout << "x2 = " << x2 << endl;
}
return 0;
}
