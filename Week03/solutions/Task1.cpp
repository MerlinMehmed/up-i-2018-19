/*
 * Напишете програма, в която да въведете две числа от клавиатурата 
 * и изведете на екрана по-голямото от тях. 
 * Използвайте тернарния оператор.
 */
#include <iostream>
using namespace std;

int main()
{
	int a, b;
	cout << "Въведете първо число: ";
	cin >> a;
	cout << "Въведете второ число: ";
	cin >> b;
	cout << (a > b ? a : b) << endl;

	system("pause");
	return 0;
}