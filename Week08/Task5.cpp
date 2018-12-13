#include <iostream>
using namespace std;

int main() {
	char s1[100];
	char s2[100];
	cin >> s1;
	cin >> s2;
	size_t j = 0;
	for (size_t i = 0; i < strlen(s1); i++) {
		if (j < strlen(s2) && s1[i] == s2[j]) {
			j++;
		}
	}
	if (j == strlen(s2)) {
		cout << "yes";
	}
	else 
	{
		cout << "no";
	}
	
	system("pause");
	return 0;
}