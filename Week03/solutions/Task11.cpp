/*
 * Напишете програма, която намира и извежда симетричното на дадено цяло число.<br>
 * Симетрично число е число със същия знак и цифри, но записани в обратен ред.
 */
#include <iostream>
using namespace std;

int main()
{
	int n;
	cout << "Enter a number: ";
	cin >> n;

	int symmetric = 0;
	while (n != 0)
	{
		symmetric = symmetric * 10 + n % 10;
		n /= 10;
	}
	cout << symmetric << endl;

	return 0;
}