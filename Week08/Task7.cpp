#include <iostream>
using namespace std;

int main() {

	int matrix[100][100];
	int n;
	do {
		cin >> n;
	} while (n <= 0 || n > 100);

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> *(*(matrix + i) + j);
		}
	}

	bool magical = true;

	// Search rows
	int rowProduct = 1;
	for (int i = 0; i < n; i++) {
		if (!magical) {
			break;
		}
		int curProduct = 1;
		for (int j = 0; j < n; j++) {
			curProduct *= *(*(matrix + i) + j);
		}
		if (i == 0)
			rowProduct = curProduct;
		else if (curProduct != rowProduct) {
			cout << "Different";
			magical = false;
		}
	}

	// Search columns
	int colProduct = 1;
	for (int i = 0; i < n; i++) {
		if (!magical) break;
		int currentProduct = 1;
		for (int j = 0; j < n; j++) {
			currentProduct *= *(*(matrix + j) + i);
		}
		if (i == 0) colProduct = currentProduct;
		else if (currentProduct != rowProduct) {
			magical = false;
		}
	}

	// Find product of first diagonal
	int d1Product = 1;
	for (int i = 0, j = 0; i < n, j < n; i++, j++) {
		d1Product *= *(*(matrix + i) + j);
	}

	// Find product of second diagonal
	int d2Product = 1;
	for (int i = 0, j = n - 1; i < n, j >= 0; i++, j--) {
		d2Product *= *(*(matrix + i) + j);
	}

	if (rowProduct && colProduct &&d1Product && d2Product)
	{
		magical = true;
	}
	else
	{
		magical = false;
	}
	
	magical ? cout << "Yes" << endl : cout << "No" << endl;

	system("pause");
	return 0;
}