#include <iostream>
using namespace std;
int main() {
	int n, i;
	cin >> n;
	int row = 1;
	while (row <= n) {
		if (row % 2 == 0) {
			i = 1;
			while (i <= row) {
				if (i % 2 == 0) {
					cout << "1";

				} else {cout << "0";}
				cout << " ";
				i = i + 1;
			}
		} else {
			i = 1;

			while (i <= row) {
				if (i % 2 == 0) {
					cout << "0";

				} else {cout << "1";}
				cout << " ";
				i = i + 1;
			}
		}
		cout << endl;
		row = row + 1;
	}



	return 0;

}

// 2nd way

// #include <iostream>
// using namespace std;
// int main() {
	

// 	int n, i,x;
// 	cin >> n;
// 	int row = 1;
// 	while (row <= n) {
// 		if (row % 2 == 0) {
// 			i = 0;
// 		} else {
// 			i = 1;
// 		}
// 		for (x = 1; x <= row; x = x + 1) {
// 			cout << i << " " ;
// 			i = 1 - i;
// 		}
// 		cout<<endl;
// 				row = row + 1;
// 	}
