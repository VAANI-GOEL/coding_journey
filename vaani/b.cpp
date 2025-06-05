#include <iostream>
using namespace std;
int main() {
	int row+(row-1);
	cin >>row+(row-1);
	int i = row- 1;
	while (i <= row+(row-1) - 1) {
		i = i + 1;
		cout << i << ' ';
	}
	while (i > row) {
		i = i - 1;
		cout << i << ' ';

		return 0;
	}