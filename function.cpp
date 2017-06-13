#include <iostream>
#include <cmath>
#include "function.h"
using namespace std;

void Q_e()
{
    setlocale (0, "");
	cout << "Введите а: ";
	int a; 
	cin >> a;
	cout << "Введите b: ";
	int b;
	cin >> b;
	cout << "Введите c: ";
	int c;
	cin >> c;
	int D;
	D = b * b - 4 * a * c;
	cout << "D = " << D << endl;
	
	if (D < 0) {
        cout << " Уравнение не имеет корня" << endl;
	} else if (D == 0) {
		      int x;
		      x = (-b) / (2*a);
		      cout << "x = " << x << endl;
	} else {
	   	  int x1; 
		  int x2;
		  x1 = (-b) + sqrt(D) / (2*a);
		  x2 = (-b) - sqrt(D) / (2*a);
		  cout << "Первый корень равен = " << x1 << endl;
		  cout << "Второй корень равен = " << x2 << endl;
	}
}
