#include <iostream>
using namespace std;

int main()
{
	int x;
	do
	{
		cout << "Enter a positive number: ";
		cin >> x;
	} while (x <= 0);

	for (int i = 1; i <= x; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << j << " ";
		}
		cout << endl;
	}

	return 0;
}