/*
* Напишете програма, която намира сумата от цифрите на произволно естествено число, въведено от клавиатурата.
*/

#include <iostream>
using namespace std;

int main()
{
	int number;
	cout << "Enter a number: ";
	cin >> number;

	if (number < 0)
	{
		number *= -1;
	}
	
	int sum = 0;
	while (number > 0)
	{
		sum = sum + number % 10;
		number = number / 10;
	}
	cout << "Sum of digits is: " << sum << endl;

	return 0;
}