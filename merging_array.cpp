#include <iostream>
using namespace std;
int main() {
	int a1[9] = {87, 92, 100, 4400};
	int a2[5] = {8, 90, 91, 97, 98};
	int k = 8; int i = 3; int j = 4;
	while (i >= 0 && j >= 0) {
		if (a1[i] < a2[j]) {
			a1[k] = a2[j];
			j--; k--;
		} else {
			a1[k] = a1[i];
			i--; k--;
		}
	}

	while (j >= 0) {
		a1[k] = a2[j];
		j--; k--;
	}
	for(int f=0;f<=8;f++){
		cout<<a1[f]<<" ";
	}
	return 0;
}