#include <iostream>
using namespace std;

int main()
{
	double x, y;
	cout << "Enter x and y coordinates: ";
	cin >> x >> y;

	int radius = 1;
	if ((x - 1)*(x - 1) + (y - 1)*(y - 1) <= radius*radius)
	{
		cout << "Point is in the circle." << endl;
	}
	else
	{
		cout << "Point is outside the circle." << endl;
	}

	system("pause");
	return 0;
}