/*
* Напишете програма, която въвежда от клавиатурата естествено число. 
* Изведете на екрана, дали въведеното число е просто.
*/

#include <iostream>
using namespace std;

int main()
{
	int number;
	cout << "Enter a number: ";
	cin >> number;

	bool prime = true;
	// sqrt(number) намира корен квадратен от даденото число
	for (int i = 2; i <= sqrt(number); i++)
	{
		if (number % i == 0)
		{
			prime = false;
			break;
		}
	}
	cout << "Prime? " << prime << endl;

	return 0;
}