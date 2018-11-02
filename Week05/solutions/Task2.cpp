#include <iostream>
using namespace std;

int main()
{
	// Не знаем колко точно числа ще въведе потребителят, 
	// но знаем че ще бъдат най-много 100, 
	// за това създаваме масив от 100 елемента.
	int numbers[100];

	// Въвеждане на брой числа от клавиатурата
	// и проверка на условието броят на числата да бъде най-малко 1 или най-много 100.
	int n;
	do
	{
		cout << "Enter positive count of numbers: ";
		cin >> n;
	} while (n < 1 || n > 100);

	// Въвеждане на n брой числа от клавиатурата
	for (int i = 0; i < n; i++)
	{
		cout << "Enter number " << i + 1 << ": ";
		cin >> numbers[i];
	}

	// Сравняваме всеки елемент от масива с тези, кото се намират след него
	// Намираме броя на еднаквите елементи
	int count = 0;
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (numbers[i] == numbers[j])
			{
				count++;
			}
		}
	}

	// Ако броят на еднакви елементи е > 0,
	// това означава, че в редицата има повтарящи се елементи.
	if (count)
	{
		cout << "Not distinct" << endl;
	}
	else
	{
		cout << "Distinct" << endl;
	}

	return 0;
}