#include <iostream>
#include <clocale>
using namespace std;
int main () {
	setlocale(LC_ALL, "russian");
	int n;
	cout << "Введите 1 - если хотите вычислить через длины сторон. Введите 2 - если хотите вычислить через координаты вершин" << endl;
	cin >> n;
	switch (n) {
	case 1: 
		cout << "введите длины сторон"; 
		double p, a, b, c, S;
		cin >> a >> b >> c;
		if (a < b + c && b < a + c && c < a + b) {
			p = (a + b + c) / 2;
			S = sqrt(p * (p - a) * (p - b) * (p - c));
			cout << S;
		}
		else cout << "такого треугольника не существует";
		break;
	case 2: cout << "введите координаты вершин"; 
		double a1, a2, b1, b2, c1, c2;
		cin >> a1 >> a2 >> b1 >> b2 >> c1 >> c2;
		cout << "S = " << abs((a1 - c1) * (b2 - c2) - (b2 - c2) * (a2 - c2)) / 2 << endl;
		break;
	default: cout << "Ошибка";
		return 0;
	}
}