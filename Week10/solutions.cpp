#include <iostream>
using namespace std;
const int GRADES = 4;
const int EXAM_GRADES = 3;
const int MAX_STUDENTS = 20;


void calculateGrade(int points[4])
{
	for (int i = 0; i < 4; i++) {
		points[i] += 2;
	}
}

void printGrades(int grades[4])
{
	for (int i = 0; i < 4; i++) {
		cout << grades[i] << " ";
	}
	cout << endl;
}

void findGradesOf(double grades[][3], int n, int fn)
{
	for (int i = 0; i < n; i++)
	{
		if (grades[i][0] == fn)
		{
			cout << "Grades of " << grades[i][0] << ": ";
			for (int j = 1; j < 3; j++) {
				cout << grades[i][j] << " ";
			}
			cout << endl;
		}
	}
}

double findAverage(double x, double y)
{
	return (x + y) / 2;
}

void printGradesHigherThan(double grades[][3], int n, double minGrade)
{
	for (int i = 0; i < n; i++)
	{
		double avg = findAverage(grades[i][1], grades[i][2]);
		if (avg >= minGrade)
		{
			cout << grades[i][0] << " ";
		}
	}
	cout << endl;
}

int findGradesHigherThan(double grades[][3], int n, double minGrade, int students[])
{
	int k = 0;
	for (int i = 0; i < n; i++)
	{
		double avg = findAverage(grades[i][1], grades[i][2]);
		if (avg >= minGrade)
		{
			students[k] = grades[i][0];
			k++;
		}
	}
	return k;
}

int next(int x)
{
	return x + 2;
}

int sum(int a, int b, int(*op)(int))
{
	int sum = 0;
	while (a < b)
	{
		sum += a;
		a = op(a);
	}
	return sum;
}


int main()
{
	int grades[] = { 2, 3, 4, 4 };
	printGrades(grades);
	calculateGrade(grades);
	printGrades(grades);

	double studentGrades[][3] = {
		{45000, 4.2, 5.5},
		{45001, 2, 3.5},
		{45002, 6, 6}
	};

	findGradesOf(studentGrades, 3, 45000);
	printGradesHigherThan(studentGrades, 3, 4.4);

	int students[MAX_STUDENTS];
	int numberOfStudents = findGradesHigherThan(studentGrades, 3, 4.4, students);
	
	for (int i = 0; i < numberOfStudents; i++) {
		cout << students[i] << " ";
	}
	cout << endl;

	void(*p) (int*) = printGrades;
	(*p) (grades);
	p(grades);

	cout << sum(1, 5, next);
	cout << endl;
	system("pause");
	return 0;
}