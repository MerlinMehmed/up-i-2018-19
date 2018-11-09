#include <iostream>
using namespace std;

int main()
{
	// Task 1
	double numbers[3][4] = 
	{
		{1.02, 2.3, 3.5, 4.5},
		{5.96, 6.06, 7.7, 8.17},
		{9.12, 10.2, 11.08, 12.02}
	};
	
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cout << numbers[i][j] << " ";
		}
		cout << endl;
	}

	system("pause");
	return 0;
}