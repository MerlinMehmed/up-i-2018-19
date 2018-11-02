#include <iostream>
using namespace std;

int main()
{
	// не знаем колко точно числа ще въведе потребителят, 
	// но знаем че ще бъдат най-много 100, 
	// за това създаваме масив от 100 елемента.
	int numbers[100];

	// въвеждане на брой числа от клавиатурата
	// и проверка на условието броят на числата да бъде най-малко 1 и най-много 100.
	int n;
	do
	{
		// въвеждане на число в масива на индекс i
		cout << "enter positive count of numbers: ";
		cin >> n;
	} while (n < 1 || n > 100);

	// въвеждане на n брой числа от клавиатурата
	for (int i = 0; i < n; i++) 
	{
		cout << "enter number " << i + 1 << ": ";
		cin >> numbers[i];
	}

	// намиране на сбора на числата
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += numbers[i];
	}
	cout << "sum is " << sum << endl;

	return 0;
}