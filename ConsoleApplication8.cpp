#include <iostream>
#include <clocale>
int main() {
	setlocale(LC_ALL, "russian");
	double a, b;
	char n;
	std:: cout << "введите выражение";
	std:: cin >> a >> n >> b;
	switch (n) {
	case'+': std::cout << a << "+" << b << "=" << a + b;
	case'*': std::cout << a << "*" << b << "=" << a * b; break;
	case'-': std::cout << a << "-" << b << "=" << a - b; break;
	case'/':
		 if (b == 0) {
			std::cout << "Знаменатель должен не равняться нулю"; break;
		}
		 else { std::cout << a << "/" << b << "=" << a / b; break; 
		 }
	default: std::cout << "Данный калькулятор может выполнять только действия сложения, умножения, вычитани и деления, только с вещественными числами ";
	}
	return 0;
}