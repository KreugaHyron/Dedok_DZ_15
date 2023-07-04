#include <iostream>
using namespace std;
int main()
{
	//Task_1 
	setlocale(LC_ALL, "RUS");
	const int numMonths = 6;
	int profits[numMonths];
	int totalProfit = 0;

	for (int i = 0; i < numMonths; i++) {
		cout << "Введите прибыль для месяца " << i + 1 << ": ";
		cin >> profits[i];
		totalProfit += profits[i];
	}
	cout << "Общая прибыль за 6 месяцев: " << totalProfit << "\n";
	cout << "\n";

	//Task_2
	const int size = 10;
	int arr[size];

	cout << "Введите элементы массива:" << "\n";
	for (int i = 0; i < size; i++) {
		cout << "Элемент " << i + 1 << ": ";
		cin >> arr[i];
	}
	cout << "Массив наоборот: ";
	for (int i = size - 1; i >= 0; i--) {
		cout << arr[i] << " ";
	}
	cout << "\n";

	//Task_3
	const int numSides = 5;
	double sides[numSides];
	double perimeter = 0.0;

	for (int i = 0; i < numSides; i++) {
		cout << "Введите длину стороны " << i + 1 << ": ";
		cin >> sides[i];
		perimeter += sides[i];
	}
	cout << "Периметр пятиугольника: " << perimeter << "\n";
	cout << "\n";

	//Task_4
	const int numMonths_1 = 12;
	int profits_1[numMonths_1];

	for (int i = 0; i < numMonths_1; i++) {
		cout << "Введите прибыль для месяца " << i + 1 << ": ";
		cin >> profits_1[i];
	}
	int maxProfit = profits_1[0];
	int minProfit = profits_1[0];
	int maxMonth = 1;
	int minMonth = 1;

	for (int i = 1; i < numMonths_1; i++) {
		if (profits_1[i] > maxProfit) {
			maxProfit = profits_1[i];
			maxMonth = i + 1;
		}
		else if (profits_1[i] < minProfit) {
			minProfit = profits_1[i];
			minMonth = i + 1;
		}
	}
	cout << "Месяц с максимальной прибылью: " << maxMonth << "\n";
	cout << "Месяц с минимальной прибылью: " << minMonth << "\n";
	cout << "\n";
}
