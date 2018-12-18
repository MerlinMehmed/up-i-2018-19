#include <iostream>
using namespace std;

typedef double (*operation)(double);
typedef bool (*predicate)(double);

double divBy2(double el)
{
	return el / 2;
}

double* map(double numbers[], int n, operation op)
{
	for (int i = 0; i < n; i++)
	{
		numbers[i] = op(numbers[i]);
	}
	return numbers;
}

int filter(double numbers[], int n, predicate p, double result[])
{
	int j = 0;
	for (int i = 0; i < n; i++)
	{
		if (p(numbers[i]))
		{
			result[j] = numbers[i];
			j++;
		}
	}
	return j;
}

bool higherThan2(double a)
{
	return a > 2;
}

int sumRecursive(int n)
{
	if (n <= 1)
		return 1;
	return n + sumRecursive(n-1);
}

long long factorial(int n)
{
	if (n <= 1)
		return 1;
	return n*(factorial(n - 1));
}

int countNumbers(int n)
{
	if (n / 10 == 0)
		return 1;
	return 1 + countNumbers(n / 10);
}


int main()
{
	double numbers[] = { 1,2,3,4,5,6 };
	int n = 6;
	map(numbers, n, divBy2);
	for (int i = 0; i < n; i++)
	{
		cout << numbers[i] << " ";
	}
	cout << endl;

	double result[6];

	int resultCount = filter(numbers, n, higherThan2, result);
	for (int i = 0; i < resultCount; i++)
	{
		cout << result[i] << " ";
	}
	cout << endl;

	cout << sumRecursive(10) << endl;
	cout << factorial(3) << endl;
	cout << countNumbers(123456) << endl;
	cout << countNumbers(0) << endl;
	system("pause");
	return 0;
}
