
/*1. присваивание
2. сложение и вычитание
3. умножение и деление на действительное число
4. сравнение
5. ввод и вывод в поток*/

#include <iostream>
#include <clocale>
#include "money.h"

int main() {
	setlocale(LC_CTYPE, "rus");

	Money a1;
	Money a2(2,60);
	Money a3(56,34);
	Money a4(3,59);
	Money a5;
	a5 = a3 - a2;
	Money a6;
	a6 = a2 + a4;
	Money a7(0,93);
	a7 = a3;
	Money a8;
	a8 = a3 / 3.00;
	Money a9;
	a9 = a4;
	Money a10;

	std::cout << "a1 ";
	a1.output();
	std::cout << "a2 ";
	a2.output();
	std::cout << "a3 ";
	a3.output();
	std::cout << "a4 ";
	a4.output();
	std::cout << "a5 ";
	a5.output();
	std::cout << "a6 ";
	a6.output();
	std::cout << "a7 ";
	a7.output();
	std::cout << "a8 ";
	a8.output();
	if (a2 != a4) {
		std::cout << "a2 != a4" << std::endl;
	}
	std::cout << a7 << std::endl;
	std::cin >> a10;
	std::cout << a10 << std::endl;


	system("pause");
	return 0;
}