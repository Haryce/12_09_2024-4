﻿#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	cout << "Введите количество корма, съедаемого хомячком в день в граммах: \n";
	int a; // Количество корма в граммах, съедаемое в день
	cin >> a;
	int b = a * 30; // Общее количество корма в граммах на 30 дней
	double c = b / 1000.0; // Преобразование в килограммы


	cout << "Необходимо закупить " << b << " килограммов корма на 30 дней.";


}
