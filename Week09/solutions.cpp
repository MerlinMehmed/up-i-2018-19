#include <iostream>
using namespace std;

long long factorial(int n)
{
	if (n < 0) {
		return -1;
	}

	long long result = 1;
	while (n > 1) {
		result *= n;
		n--;
	}
	return result;
}

unsigned int length(char symbols[])
{
	unsigned int len = 0;
	int index = 0;
	while (symbols[index] != '\0')
	{
		len++;
		index++;
	}
	return len;
}

bool sorted(int numbers[], int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		if (numbers[i] > numbers[i + 1])
			return false;
	}
	return true;
}

int search(int numbers[], int n, int elem)
{
	int left, right, middle;
	left = 0;
	right = n - 1;
	while (left <= right)
	{
		middle = (left + right) / 2;
		if (numbers[middle] == elem)
		{
			return middle;
		}
		else if (numbers[middle] < elem) 
		{
			left = middle + 1;
		}
		else
		{
			right = middle - 1;
		}
	}
	return -1;
}

void reverse(char symbols[], int n)
{
	int middle = n / 2;
	for (int i = 0; i < middle; i++)
	{
		int temp = symbols[i];
		symbols[i] = symbols[n - i - 1];
		symbols[n - i - 1] = temp;
	}
}

void reverseWithPointers(char *symbols, int n)
{
	int middle = n / 2;
	for (int i = 0; i < middle; i++)
	{
		int temp = *(symbols+i);
		*(symbols + i) = *(symbols + (n - i - 1));
		*(symbols + (n - i - 1)) = temp;
	}
}

int main()
{
	cout << factorial(-1) << endl;
	cout << factorial(1) << endl;
	cout << factorial(2) << endl;
	cout << factorial(4) << endl;

	char symbols[] = "hello world";
	cout << length(symbols) << endl;
	cout << length("") << endl;
	cout << length("Functions") << endl;

	int numbers[] = { 1, 2, 3, 4, 5, 9 };
	cout << sorted(numbers, 6) << endl; // 6 is the length of numbers[]
	int notSorted[] = { 1, 2, 3, 9, 5 };
	cout << sorted(notSorted, 5) << endl; // 5 is the length of notSorted[]

	cout << search(numbers, 6, 9) << endl; // Search numbers[] with length 6 for element 9
	cout << search(numbers, 6, 3) << endl; // Search numbers[] with length 6 for element 3
	cout << search(numbers, 6, 1) << endl; // Search numbers[] with length 6 for element 1

	int numbers2[] = { 1, 2, 3, 4, 5, 9, 10 };
	cout << search(numbers2, 7, 4) << endl;

	reverse(symbols, strlen(symbols));
	cout << symbols << endl;
	reverseWithPointers(symbols, strlen(symbols));
	cout << symbols << endl;

	system("pause");
	return 0;
}