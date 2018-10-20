/*
 * Да се напише програма, която въвежда символ от клавиатурата и проверява и отпечата дали този символ е цифра.
 */
#include <iostream>
using namespace std;

int main()
{
	char c;
	cout << "Enter a symbol: ";
	cin >> c;
	
	if (c >= '0' && c <= '9')
	{
		cout << c << " is a digit." << endl;
	}
	else
	{
		cout << c << " is not a digit." << endl;
	}

	return 0;
}