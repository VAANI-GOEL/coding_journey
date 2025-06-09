#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int n;
	cin >> n;
	int setbit = 0;
	for (int i = 0; i <= 31; i++) {
		int x = pow(2, i);
		if ((x & n ) > 0) {
			setbit++;
		}
	}
	cout << setbit;

	return 0;
}