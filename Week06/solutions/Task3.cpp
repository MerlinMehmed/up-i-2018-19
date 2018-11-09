#include <iostream>
using namespace std;

int main()
{
	// Task 3
	int matrix[10][10];
	int n, m;
	do
	{
		cout << "Enter n: ";
		cin >> n;
		cout << "Enter m: ";
		cin >> m;
	} while (n <= 0 || m <= 0 || n > 10 || m > 10);

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout << "Enter element at position " << i << " " << j << ": ";
			cin >> matrix[i][j];
		}
	}

	for (int i = 0; i < m; i++)
	{
		double sumCol = 0;
		for (int j = 0; j < n; j++)
		{
			sumCol += matrix[j][i];
		}
		cout << sumCol << endl;
	}
	
	system("pause");
	return 0;
}