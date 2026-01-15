#define _CRT_SECURE_NO_WARNINGS

// Необходимые библиотеки
#include <stdio.h>
#include <locale.h>

// Основная функция
int main()
{
	// Русская локаль
	setlocale(LC_CTYPE, "RUS");

	// Переменные разных типов
	char c1, c2;
	short int si1, si2;
	unsigned short int usi1, usi2;
	int i1, i2;
	unsigned char uc1, uc2;
	wchar_t wc1, wc2;
	long long int lli1, lli2;
	size_t st1, st2;
	float f1, f2;
	double d1, d2;
	signed int ssi1, ssi2;

	// Вычисление размеров через разность адресов
	printf("Размеры типов данных (в байтах):\n");
	printf("1) char: %lu\n", (unsigned long)(&c2 - &c1));
	printf("2) short int: %lu\n", (unsigned long)((char*)&si2 - (char*)&si1));
	printf("3) unsigned short int: %lu\n", (unsigned long)((char*)&usi2 - (char*)&usi1));
	printf("4) int: %lu\n", (unsigned long)((char*)&i2 - (char*)&i1));
	printf("5) unsigned char: %lu\n", (unsigned long)(&uc2 - &uc1));
	printf("6) wchar_t: %lu\n", (unsigned long)((char*)&wc2 - (char*)&wc1));
	printf("7) long long int: %lu\n", (unsigned long)((char*)&lli2 - (char*)&lli1));
	printf("8) size_t: %lu\n", (unsigned long)((char*)&st2 - (char*)&st1));
	printf("9) float: %lu\n", (unsigned long)((char*)&f2 - (char*)&f1));
	printf("10) double: %lu\n", (unsigned long)((char*)&d2 - (char*)&d1));
	printf("11) signed int: %lu\n", (unsigned long)((char*)&ssi2 - (char*)&ssi1));

	getchar();
	return 0;
}