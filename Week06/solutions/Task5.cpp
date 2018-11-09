#include <iostream>
using namespace std;

int main()
{
	// Task 5
	int matrix[10][10];
	int n;
	do
	{
		cout << "Enter n: ";
		cin >> n;
	} while (n <= 0 || n > 10);

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << "Enter element at position " << i << " " << j << ": ";
			cin >> matrix[i][j];
		}
	}

	int m;
	int k;

	do
	{
		cout << "Enter indexes of a number: ";
		cin >> m >> k;
	} while (m < 0 || k < 0 || m >= 10 || k >= 10);

	int i = m - 1;
	int j = k - 1;
	while (i >= 0 && j >= 0)
	{
		cout << matrix[i][j] << endl;
		i--;
		j--;
	}

	i = m + 1;
	j = k + 1;
	while (i < n && j < n)
	{
		cout << matrix[i][j] << endl;
		i++;
		j++;
	}

	i = m + 1;
	j = k - 1;
	while (i < n && j >= 0)
	{
		cout << matrix[i][j] << endl;
		i++;
		j--;
	}

	i = m - 1;
	j = k + 1;
	while (i >= 0 && j < n)
	{
		cout << matrix[i][j] << endl;
		i--;
		j++;
	}


	system("pause");
	return 0;
}