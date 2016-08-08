#include<iostream>
using namespace std;

int main() {
	int num;
	char grades;
	cin >> num;

	if (num >= 90) {
		grades = 'A';
		cout << grades;
	} else if (num >= 80) {
		grades = 'B';
		cout << grades;
	} else if (num >= 70) {
		grades = 'C';
		cout << grades;
	} else if (num >= 60) {
		grades = 'D';
		cout << grades;
	} else {
		grades = 'F';
		cout << grades;
	}
	return 0;
}
