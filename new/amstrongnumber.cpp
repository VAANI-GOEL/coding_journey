#include <iostream>
using namespace std;
int main() {
	int n;
	cin >> n ;
	int x = n;
	int n2 = n;
	int z = 0;
	while (n > 0) {
		n = n / 10;
		z++;
	}
	int f = z;
	int i = 1;
	while ( i <= f) {
		int multiply = 1;
		int a = 1;
		int sum = 0;

		while (a <= f) {
			multiply = multiply * (n2 % 10);
			;
			a++;
		}
		sum = sum + multiply;
		n2 = n2 / 10;
		if (i == f && x == sum ) {
			cout << "amstrong_number";
		}
		i++;
	}
	return 0;
}
