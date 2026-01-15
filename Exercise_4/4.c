#define _CRT_SECURE_NO_WARNINGS

// Необходимые библиотеки
#include <stdio.h>
#include <locale.h>

// Основная функция
int main()
{
	// Русская локаль
	setlocale(LC_CTYPE, "RUS");

	// Объявление и инициализация массива
	float array[10] = { 1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9, 10.0 };
	float* ptr_a;

	// 4.1 Проверка адресов массива
	printf("4.1 Адреса массива:\n");
	printf("array = %p\n", array);
	printf("&array[0] = %p\n", &array[0]);
	printf("&array = %p\n\n", &array);

	// 4.2 Операции с указателем
	printf("4.2 Операции с указателем:\n");
	ptr_a = array; // Установка на начало массива
	printf("Начало: ptr_a = %p, *ptr_a = %.1f\n", ptr_a, *ptr_a);

	ptr_a++;
	printf("После ptr_a++: ptr_a = %p, *ptr_a = %.1f\n", ptr_a, *ptr_a);

	ptr_a = ptr_a + 4;
	printf("После ptr_a+4: ptr_a = %p, *ptr_a = %.1f\n", ptr_a, *ptr_a);

	ptr_a = ptr_a - 2;
	printf("После ptr_a-2: ptr_a = %p, *ptr_a = %.1f\n\n", ptr_a, *ptr_a);

	// 4.3 Проход по массиву с шагом 2
	printf("4.3 Проход по массиву с шагом 2:\n");
	ptr_a = array;
	for (int i = 0; i < 10; i += 2)
	{
		printf("array[%d] = %.1f (адрес: %p)\n", i, *ptr_a, ptr_a);
		ptr_a += 2;
	}

	// 4.4 Проход в обратном порядке
	printf("\n4.4 Проход в обратном порядке:\n");
	ptr_a = &array[9]; // Установка на последний элемент
	for (int i = 9; i >= 0; i--)
	{
		printf("array[%d] = %.1f (адрес: %p)\n", i, *ptr_a, ptr_a);
		ptr_a--;
	}

	getchar();
	return 0;
}
