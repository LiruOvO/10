#include <iostream>
#include <cmath>

using namespace std;
//Liza Ruda FIT 1-4 Варіант 12

int main()
{
	setlocale(0, ".1251");
	double z1, z2, a;
	z1 = 0, z2 = 0;
	const double p = acos(-1.0);
	cout << "Введіть значення a = ";
	cin >> a;

	z1 = (sin(4 * a) / (1 + cos(4 * a))) * (cos(2 * a) / (1 + cos(2 * a)));

	double x = (3 * p) / 2 - a;
	z2 = cos(x)/sin(x);
	

	cout << "Результат z1=" << z1 << endl;
	cout << "Результат z2=" << z2 << endl;
	return 0;
}
