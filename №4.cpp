#include <iostream>
#include <cmath>

using namespace std;
//Liza Ruda FIT 1-4 Варіант 27

int main()
{
	setlocale(0, ".1251");
	double b,x,y,p;
	x = 0, y = 0, p = 0;
	const int a = 7;
	cout << "Введіть значення b не менше нуля";
	cin >> b;
	while (b<0)
	{
		cout << "Введіть значення b не менше нуля";
		cin >> b;
	}
	x = sqrt(a) + sqrt(b);
	p = sqrt(pow(x, 2) + pow(a, 2));
	y = pow(atan(abs(p)),3);

	cout << "Результат y = "<< y <<endl;
	return 0;
}
