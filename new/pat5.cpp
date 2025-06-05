#include <iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	cout <<"*";
	for (int a = 1; a <= 2*(n - 2)+1; a++) {
		cout <<" ";
	}
	for (int b = 1; b <= n; b++) {
		cout <<"*"<<" ";
	}
	cout << endl;
	for (int row = 1; row <= n - 2; row++) {
		cout << "*"<<" ";
		for (int a = 1; a <=2*(n - 2) ; a++) {
			cout << " ";
		}
		cout << "*";
		for (int a = 1; a <= 2*(n - 1); a++) {
			cout << " ";
		}
		cout << endl;
	}
	for (int b = 1; b <= 2 * n - 1; b++) {
		cout << "*"<<" ";
	}
	cout << endl;

	for (int row = 1; row <= n - 2; row++) {

		for (int a = 1; a <=2*(n - 1); a++) {
			cout << " ";
		}
		cout << "*";
		for (int a = 1; a <= 2*(n - 2)+1; a++) {
			cout << " ";
		}
		cout << "*";
		cout << endl;
	}
	for (int b = 1; b <= n; b++) {
		cout << "*"<<" ";
	}
	for (int a = 1; a <=2*(n - 2); a++) {
		cout << " ";
	}

	cout << "*";


	return 0;
}