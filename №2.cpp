#include <iostream>
#include <cmath>

using namespace std;
//Liza Ruda FIT 1-4 Варіант 12
int main()
{
	setlocale(0, ".1251");
	double ha, wc, i, ax,ay, bx, by, cx, cy;
	ha = 0, wc = 0, i = 12;
	ax = 0, ay = 0, bx = i, by = i - 1, cx = -1, cy = i + 1;
	//Знаходимо довжину сторін
	double a = sqrt(pow((bx - ax), 2) + pow((by - ay), 2));
	double b = sqrt(pow((cx - bx), 2) + pow((cy - by), 2));
	double c = sqrt(pow((ax - cx), 2) + pow((ay - cy), 2));
	//Знаходимо висоту проведену на а та бісектрису поведену на с за формулами
	ha = c * b / a;
	wc = sqrt(2) * a * b / (a + b);

	cout << "Висота трикутника АВС проведена на сторону a = " << ha << endl;
	cout << "Бісектриса трикутника АВС проведена на сторону c = " << wc << endl;
	return 0;
}
