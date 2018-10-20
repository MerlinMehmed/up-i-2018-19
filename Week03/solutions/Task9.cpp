#include <iostream>
using namespace std;

int main()
{
	double number;
	cout << "Enter a number: ";
	cin >> number;

	double result;
	if (number < -4)
	{
		result = 2 * number + 1;
	}
	else if(number <= 5)
	{
		// sqrt(number) изчислява корен квадратен от даденото число
		result = sqrt(pow(number, 2) + 3);
	}
	else
	{
		result = number / (2 * number + 1);
	}
	cout << "Result is: " << result << endl;
	
	return 0;
}