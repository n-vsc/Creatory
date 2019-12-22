#include <iostream>
using namespace std;
//#define g  -9.8
int main() {
	double x, x0, v0, t;
	const double g = -9.8;
	cin >> x0 >> v0 >> t;
	x = x0 + v0 * t - 1/2.0 * g * t * t;
	cout << x <<" ";
	x = x0 + v0 * t - g * t * t/2;
	cout << x;
	return 0;
}