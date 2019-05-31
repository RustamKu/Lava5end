


#include <iostream>
#include <string>
#include "math.h"
#ifndef  COMPLEX_H
#define  COMPLEX_H

using namespace std;
class Complex {
private:
	double c1, c2;
	double x, y;
public:
	Complex() {
		x = 0;
		y = 0;
	}
	Complex(double c11, double c22) {
		c1 = c11;
		c2 = c22;
	}
	Complex(const Complex&copy) {

	}
	~Complex() {
		std::cout << "destructor" << std::endl;
	}
	void cplx() {
		std::cout << "Enter real  :" << std::endl;
		std::cin >> c1;
		std::cout << "Enter imag :" << std::endl;
		std::cin >> c2;
		x = sqrt(pow(c1, 2) + pow(c2, 2));
		y = atan(c2 / c1);
		std::cout << "Your module " << x << std::endl;
		std::cout << "argument " << y << ";";
		std::cout << "\n";
	}
	Complex& operator=(Complex& operator2) {
		this->x = operator2.x;
		this->y = operator2.y;
		return *this;
	}

	bool operator >(Complex operator2) {
		return this->c1 > operator2.c1 && this->c2 > operator2.c2;

	}
	bool operator <(Complex operator2) {
		return this->c1 < operator2.c1 && this->c2 < operator2.c2;

	}
	bool operator >=(Complex operator2) {
		return this->c1 >= operator2.c1 && this->c2 >= operator2.c2;

	}
	bool operator <=(Complex operator2) {
		return this->c1 <= operator2.c1 && this->c2 <= operator2.c2;

	}
	bool operator !=(Complex operator2) {
		return this->c1 != operator2.c1 && this->c2 != operator2.c2;

	}
	bool operator ==(Complex operator2) {
		return this->c1 == operator2.c1 && this->c2 == operator2.c2;

	}

	friend const Complex operator++(Complex& k, int) {
		Complex retcomp(k.x, k.y);
		k.x++;
		k.y++;
		return retcomp;
	}
	friend const Complex operator--(Complex& k, int) {
		Complex ip(k.x, k.y);
		k.x++;
		k.y++;
		return ip;
	}
	friend const Complex& operator --(Complex& k) {
		k.x--;
		k.y--;
		return k;
	}
	friend const Complex& operator++(Complex& k) {
		k.x++;
		k.y++;
		return k;
	}
	Complex& operator++(int) {
		Complex znachenie(x, y);
		x++;
		x++;
		return znachenie;
	}
	friend ostream& operator<<(ostream& out, Complex& operator2) {
		out << "module " << operator2.c1 << endl;
		out << "argumebt " << operator2.c2 << endl;
		return out;
	}
	friend istream& operator>>(istream& in, Complex& operator2) {
		cout << "Enter real : ";
		cin >> operator2.x;
		cout << "Enter img : ";
		cin >> operator2.y;
		return in;
	}

};
#endif // ! COMPLEX_H