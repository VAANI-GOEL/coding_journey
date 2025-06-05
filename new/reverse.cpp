#include <iostream>
using namespace std;
int main() {

	int n;
	cin >> n;

	for (int i = 1; i <= n; n = n / 10) {
		cout << n % 10;
		if (n / 10 == 0) {
			break;
		}




	}

	return 0;
}