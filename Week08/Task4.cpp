#include <iostream>
using namespace std;

int main()
{
	// Task 4
	int n, m;
	int numbers[20] = { 1,1,1,2,3,5 };
	do {
		cout << "Enter N: ";
		cin >> n;
	} while (n <= 0 || n > 20);

	cout << "Enter M: ";
	cin >> m;

	for (int i = 0; i < n; i++) {
		cin >> numbers[i];
	}

	bool found = false;
	for (int i = 0; i < n; i++) {
		int sum = 0;
		for (int j = i; j < n; j++) {
			sum += numbers[j];
			if (sum == m) {
				cout << i + 1 << " " << j + 1 << endl;
				found = true;
			}
		}
	}
	if (!found)
		cout << "No such subsequences";

	system("pause");
	return 0;
}