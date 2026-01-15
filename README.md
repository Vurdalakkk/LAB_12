<h1 align="center">Домашнее задание к работе 12</h1>
<div align="center">

## Условие задачи


<img width="615" height="566" alt="изображение" src="https://github.com/user-attachments/assets/5e080662-bbb4-4acf-b3f6-caf3904636b5" />



## 1. Алгоритм и блок-схема

### Алгоритм
1. **Начало**
2. Подключение необходимых библиотек:<br>
   - `stdio.h` - для ввода/вывода<br>
   - `locale.h` - для поддержки русского языка
3. Определение макроса `_CRT_SECURE_NO_WARNINGS` для отключения предупреждений безопасности
4. Установка русской локали для корректного отображения текста
5. Объявление переменных различных типов данных (по две каждого типа):<br>
   - `char`, `unsigned char`<br>
   - `short int`, `unsigned short int`<br>
   - `int`, `signed int`<br>
   - `wchar_t`<br>
   - `long long int`<br>
   - `size_t`<br>
   - `float`, `double`
6. Вывод заголовка "Размеры типов данных (в байтах):"
7. Последовательное вычисление и вывод размеров каждого типа данных:<br>
   - Для типов `char` и `unsigned char`: вычисление разности адресов соседних переменных<br>
   - Для остальных типов: вычисление разности адресов с приведением к `char*` для получения размера в байтах
8. Вывод размеров для всех 11 типов данных с соответствующими номерами
9. Ожидание нажатия клавиши `getchar()` для задержки закрытия консоли
10. Завершение программы с возвратом 0
11. **Конец**
</div>

### Блок-схема





</div>

## 2. Реализация программы

```c
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
```

<div align="center">

## 3. Результаты работы программы


<img width="286" height="211" alt="изображение" src="https://github.com/user-attachments/assets/a6278b5d-fb1d-4785-a198-7786443b2b47" />




## 4. Информация о разработчике

Выполнил Гребенников Артем, бИПТ-252
