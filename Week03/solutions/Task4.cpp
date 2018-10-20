/*
 * Напишете програма, която въвежда от клавиатурата месец от годината като число. 
 * Според въведеното число, изведете на екрана сезонът, в който се намира този месец. 
 * Ако месецът не е валиден изведете подходящо съобщение.
*/

#include <iostream>
using namespace std;

int main()
{
	int month;
	cout << "Enter a month number: ";
	cin >> month;
	switch (month)
	{
	case 12:
	case 1:
	case 2: cout << "Winter" << endl; break;
	case 3:
	case 4:
	case 5: cout << "Spring" << endl; break;
	case 6:
	case 7:
	case 8: cout << "Summer" << endl; break;
	case 9:
	case 10:
	case 11: cout << "Autumn" << endl; break;
	default: cout << "Not a month number" << endl; 
	}

	return 0;
}