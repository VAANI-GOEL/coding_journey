#include <iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	int row = 1;
	while (row <= n) {
		int space = 1;

		while (space <=(n - row) ) {
			cout <<" ";
			space = space + 1;
		}
		int i = row - 1;
		while (i <= row + (row - 1) - 1) {
			i = i + 1;
			cout << i ;
		}
		while (i > row) {
			i = i - 1;
			cout << i ;
		}
		cout << endl;
		row = row + 1;
	}
	return 0;
}