#include <iostream>
using namespace std;

int main() {
	char s1[100];
	cin.getline(s1, 100);
	char s2[100];
	int j = 0;
	for (size_t i = 0; i < strlen(s1); i++) {
		if (s1[i] >= 'a' && s1[i] <= 'z') {
			s2[j] = s1[i];
			j++;
		}
	}
	s2[j] = '\0';
	cout << s2;

	system("pause");
	return 0;
}