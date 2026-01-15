#define _CRT_SECURE_NO_WARNINGS

// Необходимые библиотеки
#include <stdio.h>
#include <locale.h>

// Основная функция
int main()
{
	// Русская локаль
	setlocale(LC_CTYPE, "RUS");

	// Побайтовый вывод int
	int num_int = 0x12345678;
	unsigned char* p = (unsigned char*)&num_int;

	printf("Целое число: %d (0x%08X)\n", num_int, num_int);
	printf("Побайтовый вывод (порядок байтов в памяти):\n");

	for (int i = 0; i < sizeof(int); i++)
	{
		printf("Байт %d: адрес %p, значение 0x%02X\n", i, p + i, *(p + i));
	}

	// Определение порядка байтов
	printf("\nПорядок байтов в системе: ");
	if (*p == 0x78)
		printf("Little-endian (прямой порядок)\n");
	else if (*p == 0x12)
		printf("Big-endian (обратный порядок)\n");
	else
		printf("Неизвестный порядок\n");

	// Сравнение разных типов
	printf("\nСравнение для числа 12345:\n");

	int int_num = 12345;
	float float_num = 12345.0;
	double double_num = 12345.0;

	// Вывод int
	printf("\nint (12345):\n");
	p = (unsigned char*)&int_num;
	for (int i = 0; i < sizeof(int); i++)
		printf("Байт %d: 0x%02X\n", i, *(p + i));

	// Вывод float
	printf("\nfloat (12345.0):\n");
	p = (unsigned char*)&float_num;
	for (int i = 0; i < sizeof(float); i++)
		printf("Байт %d: 0x%02X\n", i, *(p + i));

	// Вывод double
	printf("\ndouble (12345.0):\n");
	p = (unsigned char*)&double_num;
	for (int i = 0; i < sizeof(double); i++)
		printf("Байт %d: 0x%02X\n", i, *(p + i));

	getchar();
	return 0;
}
