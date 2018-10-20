#include <iostream>
using namespace std;

int main()
{
	double x, y;
	cout << "Enter x and y coordinates: ";
	cin >> x >> y;

	if ((x >= 1 && x <= 2) && (y >= 1 && y <= 2))
	{
		cout << "Point is in the square." << endl;
	}
	else
	{
		cout << "Point is outside the square." << endl;
	}

	return 0;
}