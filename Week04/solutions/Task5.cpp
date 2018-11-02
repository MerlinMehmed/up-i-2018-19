
#include <iostream>
using namespace std;

int main()
{
	// Не знаем колко точно числа ще въведе потребителят, 
	// но знаем че ще бъдат най-много 100, 
	// за това създаваме масив от 100 елемента.
	int numbers[100];

	// Въвеждане на брой числа от клавиатурата
	// и проверка на условието броят на числата да бъде най-малко 1 и най-много 100.
	int n;
	do
	{
		cout << "Enter positive count of numbers: ";
		cin >> n;
	} while (n < 1 || n > 100);

	// Въвеждане на n брой числа от клавиатурата
	for (int i = 0; i < n; i++)
	{
		// Въвеждане на число в масива на индекс i
		cout << "Enter number " << i + 1 << ": ";
		cin >> numbers[i];
	}

	int i, j;
	do {
		cout << "Enter indexes to swap: ";
		cin >> i >> j;
	} while (i < 0 || j < 0 || i >= n || j >= n);

	// Размяна на стойностите
	int temp = numbers[i];
	numbers[i] = numbers[j];
	numbers[j] = temp;

	// Извеждане на масива след размяната
	for (int k = 0; k < n; k++)
	{
		cout << numbers[k] << " ";
	}

	return 0;
}