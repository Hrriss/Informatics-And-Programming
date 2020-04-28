#pragma once
#include <iostream>

class Money {
private:
	int r, c;
public:
	Money();
	Money(const Money &a); 
	Money(int _r, int _c);

	~Money();

	void output();

	Money& operator=(const Money& a); //присваивание
	Money operator+(const Money& a); //сложение
	Money operator-(const Money& a); //вычитание

	bool operator==(const Money& a);
	bool operator!=(const Money& a);

	friend Money operator*(const Money& a, double d);// умножение
	friend Money operator/(const Money& a, double d);// деление

	friend std::ostream& operator<<(std::ostream& stream, const Money& a);// вывод из потока
	friend std::istream& operator>>(std::istream& stream, Money& a);// ввод в поток
};