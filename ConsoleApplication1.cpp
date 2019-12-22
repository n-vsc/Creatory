#include <iostream>

using namespace std;

int main() {
	double eps, sum = 0, start_pow = 1, temp = 0;
	int k1 = 0, k2 = 1, sub = -1, fact = 1, x;

	cin >> x >> eps;

	double const start = x;
	double const sq = start * start;

	if (x) {
		do {
			temp = (sub * start * start_pow) / ((2 * k1 - 1) * (fact));
			sum += temp;
			k1++;
			fact *= (k2 + 1) * (k2 + 2);
			k2 += 2;
			sub = -sub;
			start_pow *= sq;
		} while (abs(temp) > eps);
		cout << sum;
	}
	else {
		cout << 0 << endl;
	}
	return 0;
}