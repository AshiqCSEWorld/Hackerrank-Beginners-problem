#include<iostream>
using namespace std;

int main() {
	int a1, b1, c1, a2, b2, c2;
	cin >> a1 >> b1 >> c1;
	cin >> a2 >> b2 >> c2;

	if (c1 > c2) {
		cout << "10000\n";
	} else if (b1 > b2 && c1>=c2) {
		cout << 500 * (b1 - b2) << endl;
	} else if (a1 > a2 && b1>=b2 && c1>=c2) {
		cout << 15 * (a1 - a2) << endl;
	} else {
		cout << "0\n";
	}
	return 0;
}
