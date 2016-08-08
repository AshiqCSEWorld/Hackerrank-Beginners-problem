int main() {
	int total = 1000;
	int N;
	cin >> N;

	int A = N / 3;
	int sum = A + N;

	int left = total - sum;

	cout << left << "\n";

	return 0;
}
