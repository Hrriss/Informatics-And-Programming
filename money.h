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

	Money& operator=(const Money& a); //������������
	Money operator+(const Money& a); //��������
	Money operator-(const Money& a); //���������

	bool operator==(const Money& a);
	bool operator!=(const Money& a);

	friend Money operator*(const Money& a, double d);// ���������
	friend Money operator/(const Money& a, double d);// �������

	friend std::ostream& operator<<(std::ostream& stream, const Money& a);// ����� �� ������
	friend std::istream& operator>>(std::istream& stream, Money& a);// ���� � �����
};