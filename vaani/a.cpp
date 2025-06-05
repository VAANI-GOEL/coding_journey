#include <iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	int i = 2;
	while (i <= n) {   //for updating i
		int z = 2;
		while (z <= i - 1) { //for finding out prime
			if (i % z == 0) {
				break; // if breaking takes place it happens for z<i only
			}
			z = z + 1;
		} if (z == i) {
			cout << i << ' '; //natural breaking of loop takes place when z=i and i=prime
		}
		i = i + 1;

	}

	return 0;
}