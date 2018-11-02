
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

	int m;
	cout << "Enter number to search for: ";
	cin >> m;

	// Търсене на въведеното число в масива
	int i = 0;
	do
	{
		i++;
	} while (i < n && numbers[i] != m);

	if (numbers[i] == m) {
		cout << "Found" << endl;
	}
	else {
		cout << "Not found" << endl;;
	}

	return 0;
}