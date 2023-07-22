#include<iostream>

using namespace std;

int main() {
	int n;
	cin >> n;

	int sum = 0;
	for (int i = 0; i < n; i++) {
		int b;
		cin >> b;

		sum += b;
	}

	if (sum % n == 0) cout << n;
	else cout << n - 1;
}
