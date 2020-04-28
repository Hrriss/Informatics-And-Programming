#include <iostream>
#include "money.h"

Money::Money() : r(0), c(0) {}
Money::Money(const Money &a) : r(a.r), c(a.c) {}
Money::Money(int _r, int _c) : r(_r), c(_c) {}

Money::~Money() {
	r = 0;
	c = 0;
}

void Money::output() {
	std::cout << r << "ğ. + " << c << "ê." << std::endl;
}

Money& Money::operator=(const Money& a) {
	(*this).r = a.r;
	c = a.c;
	return *this;
}
Money Money::operator+(const Money& a) {
	Money res;
	res.r = r + a.r;
	res.c = c + a.c;
	if (res.c > 100) {
		(res.r)++;
		res.c = res.c - 100;
	}
	return res;
}
Money Money::operator-(const Money& a) {
	Money res;
	res.r = r - a.r;
	res.c = c - a.c;
	if (res.c < 0) {
		(res.r)--;
		res.c = 100 + res.c;
	}
	return res;
}

bool Money::operator==(const Money& a) {
	if (a.r == r && a.c == c) return true;
	else return false;
}
bool Money::operator!=(const Money& a) {
	if (a.r != r || a.c != c) return true;
	else return false;
}

Money operator*(const Money& a, double d) {
	Money res;
	res.r = a.r * d;
	res.c = a.c * d;
	if (res.c > 100) {
		int w;
		w = res.c / 100;
		res.r = res.r + w;
		res.c = res.c % 100;
	}
	return res;
}
Money operator/(const Money& a, double d) {
	Money res;
	res.r = a.r * 1/d;
	int w;
	w = res.r * d;
	w = a.r - w;
	res.c = (w * 100 + a.c) * 1 / d;
	return res;
}

std::ostream& operator<<(std::ostream& stream, const Money& a) {
	stream << a.r << "ğ. + " << a.c << "ê.";
	return stream;
}
std::istream& operator>>(std::istream& stream, Money& a) {
	stream >> a.r >> a.c;
	return stream;
}