#include <stdio.h>
#include <Windows.h>

void sec_to_normaltime() {
	int sec;
	printf("Введите секунды:");
	if (scanf_s("%d", &sec) != 1 || sec < 0) {
		printf("Это некорректное число!\n");
		return;
	}

	int hours = sec / 3600;
	int minutes = (sec % 3600) / 60;
	int seconds = sec % 60;

	printf("Перевели секнуды в нормальный формат: %d ч %d мин %d с.\n", hours, minutes, seconds);
	system("pause");
	system("cls");
	return;

}
void radius_area() {
	const double PI = 3.14159265358979;
	double radius;

	printf("Введите радиус круга:\n");
	if (scanf_s("%lf", &radius) != 1) {
		printf("Это не число!");
		return;
	}
	if (radius < 0) {
		printf("Радиус не может быть отрицательным!");
		return;
	}
	double circle = 2 * PI * radius;
	double area = PI * radius * radius;

	printf("Длина окружности: %.2lf\n", circle);
	printf("Площадь круга: %.2lf\n", area);
	system("pause");
	system("cls");
	return;
}
void c_translate_f() {
	int C;
	double F;

	printf("Введите Градусы Цельсия: ");
	if (scanf_s("%d", &C) != 1) {
		printf("Это не число!");
		return;
	}
	F = (double)C * 9 / 5 + 32;
	printf("Цельсий: %d перевод в Фаренгейт = %.1f\n", C, F);
	system("pause");
	system("cls");
	return;
}
void tab_multiplay_seven() {
	int a = 7;
	printf("-------------\n");
	printf("|7 * 1 = %3d|\n", a * 1);
	printf("|7 * 2 = %3d|\n", a * 2);
	printf("|7 * 3 = %3d|\n", a * 3);
	printf("|7 * 4 = %3d|\n", a * 4);
	printf("|7 * 5 = %3d|\n", a * 5);
	printf("|7 * 6 = %3d|\n", a * 6);
	printf("|7 * 7 = %3d|\n", a * 7);
	printf("|7 * 8 = %3d|\n", a * 8);
	printf("|7 * 9 = %3d|\n", a * 9);
	printf("|7 * 10 = %2d|\n", a * 10);
	printf("-------------\n");
	system("pause");
	system("cls");
	return;
}
void dvoichniy_kod() {
	int n;
	printf("Введите целое число: ");
	if (scanf_s("%d", &n) != 1) {
		printf("Это не число!\n");
		return;
	}
	printf("Десятичное: %d\n", n);
	printf("Шестнадцатеричное: %#x\n", n);
	printf("Восьмиричное: %#o\n", n);
	printf("Строка: %#010x\n", n);
	system("pause");
	system("cls");

	return;
}
int main(void) {
	SetConsoleOutputCP(1251);
	sec_to_normaltime();
	radius_area();
	c_translate_f();
	tab_multiplay_seven();
	dvoichniy_kod();
	return 0;
}