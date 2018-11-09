#include <iostream>
using namespace std;

int main()
{
	// Task 4
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

	cout << "Insert element to search for: ";
	int x;
	cin >> x;
	int i = 0, j = 0;
	bool found = false;

	while (i < n && !found)
	{
		while (j < m && !found)
		{
			if (matrix[i][j] == x)
				found = true;
			else
				j++;
		}
		if (!found)
		{
			i++;
			j = 0;
		}
	}

	if (found)
		cout << x << " is found at indexes " << i << " " << j << endl;
	else
		cout << x << " is not found.\n";

	system("pause");
	return 0;
}