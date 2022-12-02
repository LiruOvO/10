
#include <iostream>
#include <cmath>

using namespace std;
//Liza Ruda FIT 1-4 Варіант 12
int main()
{
	setlocale(0, ".1251");
	double c1, c2, c3, t1, t2, t3, call1, call2, call3, all;
	cout << "Введіть три тарифи телефонних розмов ";
	cin >> c1 >> c2 >> c3;
	cout << "Скільки хвилин тривали розмови? ";
	cin >> t1 >> t2 >> t3;
	call1 = c1 * t1;
	call2 = c2 * t2;
	call3 = c3 * t3;
	all = call1 + call2 + call3;

	cout << "Комп'ютер нарахує  " << call1 << ", " << call2 << " та " << call3 << "коп" << endl;
	cout << "Всього до сплати:" << all << "коп" << endl;
	return 0;
}
