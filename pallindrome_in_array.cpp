#include <iostream>
using namespace std;
int main() {
	int arr[100];
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	int i = 0;
	int j = n - 1;
	while (i < j) {
		if (arr[i] == arr[j]) {
			i++;
			j--;
		} else {
			cout << "sorry!!!! not a pallindrom";
			return 0;
		}
	}
	cout << "horray!!! a pallindrom";
	return 0;
}