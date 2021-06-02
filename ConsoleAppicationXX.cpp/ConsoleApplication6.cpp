#include <iostream>
#include <clocale>
using namespace std;
int main() {
	setlocale(LC_ALL, "russian");
	double a, b, c, D, x, x1, x2;
	cout << "введите значиния для a, b и c соответственно" << endl;
	cin >> a >> b >> c;
	if (a == 0) {
		if (b == 0)
			if (c == 0)
				cout << "x - любое число";
			else cout << "нет действительных корней";
		else {
			x = -(c / b);
			cout << "x=" << x;
		}
	}
	else {
		D = b * b - 4 * a * c;
		if (D > 0) {
			x1 = (-b + sqrt(D)) / (2 * a);
			x2 = (-b - sqrt(D)) / (2 * a);
			cout << "x1=" << x1 << endl << "x2=" << x2;
		}
		else if (D == 0) {
			x = -b / (2 * a);
			cout << "x=" << x;
		}
		else cout << "нет действительных корней";
	}
		return 0;
}