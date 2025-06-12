#include <iostream>
using namespace std;
int main() {

	int arr[100];
	int x;

	for (int i = 0; i <= 5; i++) {
		cin >> x;
		arr[i] = x;

	}
	for (int i = 2; i <= 4; i++) {
		cout << arr[i]<<" ";
	}
	return 0;

}