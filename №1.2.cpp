
#include <iostream>
#include <cmath>

using namespace std;
//Liza Ruda FIT 1-4 Варіант 12
int main()
{
	setlocale(0, ".1251");
	double price, p2, p3;
	cout << "Введіть вартість товару ";
	cin >> price;
	p2 = price - (price * 0.1);
	p3 = p2 + (p2 * 0.15);

	cout << "Вартість товару після зниження на 10%, а потім підвищення на 15% становитиме -  " << p3 << endl;
	
	return 0;
}
