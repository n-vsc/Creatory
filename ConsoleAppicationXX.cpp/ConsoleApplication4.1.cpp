#include <iostream>
using namespace std;
int main() {
	double a, b, c;
	cin >> a >> b;
	c = a; 
	a = b;
	b = c;
	cout << a<<endl<< b;
	return 0;
}