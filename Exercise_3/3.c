#define _CRT_SECURE_NO_WARNINGS

// Необходимые библиотеки
#include <stdio.h>
#include <locale.h>

// Основная функция
int main()
{
	// Русская локаль
	setlocale(LC_CTYPE, "RUS");

	// Исследование для int
	printf("=== Исследование для int ===\n");
	int x_int = 5;
	int* pa_int = &x_int;

	printf("Начальный адрес: %p, значение: %d\n", pa_int, *pa_int);
	pa_int++;
	printf("После pa++: %p (смещение)\n", pa_int);
	pa_int--;
	printf("После pa--: %p (возврат)\n", pa_int);

	// Исследование для double
	printf("\n=== Исследование для double ===\n");
	double x_double = 5.0;
	double* pa_double = &x_double;

	printf("Начальный адрес: %p, значение: %lf\n", pa_double, *pa_double);
	pa_double++;
	printf("После pa++: %p (смещение)\n", pa_double);
	pa_double--;
	printf("После pa--: %p (возврат)\n", pa_double);

	// Исследование для char
	printf("\n=== Исследование для char ===\n");
	char x_char = 'A';
	char* pa_char = &x_char;

	printf("Начальный адрес: %p, значение: %c\n", pa_char, *pa_char);
	pa_char++;
	printf("После pa++: %p (смещение)\n", pa_char);
	pa_char--;
	printf("После pa--: %p (возврат)\n", pa_char);

	getchar();
	return 0;
}