#include <iostream>
using namespace std;
int main() {
	int arr[] = {1, 2, 3, 4, 4, 5};
	int n = sizeof(arr) / sizeof(int);
	int k;
	cin >> k;
	int s = 0; int e = n - 1;


	int ans = -1;
	while (s <= e) {

		int m = (s + e) / 2;
		if (arr[m] == k) {
			ans = m;
			break;
		} else if (arr[m] > k) {
			m = m - 1;
		} else {
			m = m + 1;
		}
	}
	if (ans == -1) {
		cout << "key not found";
	} else {
		cout << "key found at" + ans;
	}
	return 0;

}