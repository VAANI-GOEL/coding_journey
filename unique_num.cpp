#include <iostream>
using namespace std;
int main() {

	int n, x;
	cin >> n;
	int oddone = 0;
	int i;
	for (i = 1; i <= n; i++) {
		cin >> x;
		oddone = oddone ^ x;
	}
	cout << oddone;
	return 0;
}
