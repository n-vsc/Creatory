#include <iostream>


using namespace std;


int main() {
	double sum = 0, x, eps, temp, i = 1;

	cin >> x >> eps;

	if (x) {
		temp = x;
		while (abs(temp) > eps) {
			sum += temp / i;
			temp *= x * x;
			i += 2;
		}
		cout << 2 * sum << endl;
	}
	else {
		cout << 0 << endl;
	}

	return 0;
}