/*
* Напишете програма, която въвежда от клавиатурата естествено число x. 
* Изчислете x!, т.е. произведението от 1 до съответното въведено число (1 * 2 * ... * (x - 1) * x).
*/

#include <iostream>
using namespace std;

int main()
{
	int number;
	do
	{
		cout << "Enter a number: ";
		cin >> number;
	} while (number < 0);

	int factorial = 1;
	while (number > 0)
	{
		factorial *= number;
		number -= 1;
	}
	cout << "Factorial is: " << factorial << endl;
	
	return 0;
}