#include <iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	int arr[100];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	for (int i = n - 1; i >= 1; i--) {
		for (int z = 0; z < i; z++) {
			if (arr[z] > arr[z + 1]) {
				swap(arr[z], arr[z + 1]);
			}
		}
	}
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}

	return 0;
}