#include <iostream>
using namespace std;

int main()
{
	int number;
	cout << "Enter a number: ";
	cin >> number;

	int result;
	if (number >= 20)
	{
		// pow(x, y) изчислява x^y
		result = 2 * pow(number, 4) + 3;
	}
	else
	{
		// abs(x) изчислява |x|
		result = abs(number - 1);
	}
	cout << "Result is: " << result << endl;
	
	return 0;
}