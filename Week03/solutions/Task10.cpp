/*
 * Напишете програма, която въвежда от клавиатурата целите числа m и n, където (m < n).
 * Програмата да извежда всички числа в интервала [m, n], които са кратни на 5.
 */
#include <iostream>
using namespace std;

int main()
{
	int m, n;
	do
	{
		cout << "Enter m and n, m < n: ";
		cin >> m >> n;
	} while (m >= n);
	
	for (m; m <= n; m++)
	{
		if (m % 5 == 0)
			cout << m << endl;
	}

	return 0;
}