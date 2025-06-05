#include <iostream>
using namespace std;
int main() {
	int n;
	cin >> n;

	for (int row = 1; row <= n; row++) {
		for (int space = 1; space <= n - row; space++) { //space pattern for image
			cout << " ";
		}
		for (int i = 1; i <= 2 * row - 1; i++) { //for pattern of each line in image
			cout << '*' ;
		}
		cout << endl;
	}
	for (int row2 = 1; row2 <= n - 1; row2++) {
		for (int space = 1; space <= row2; space++) {  //space pattern for mirror image
			cout << " ";
		}
		for (int z = 1; z <= 2 * (n - row2) - 1; z++) { //for pattern of each line in mirror image
			cout << '*' ;
		}
		cout << endl;
	}
	return 0;
}