#include <iostream>
using namespace std;
int main() {
	int a[] = {1,2,3,4,5,6,7};
	int n = sizeof(a) / sizeof(int);
	int freq[n] = {0};

	for (int i = 0; i <= n-1; i++) {
		freq[a[i]] = freq[a[i]] + 1;
	}
	int max = freq[0];
	int ans = 0;
	for (int f = 1; f <= n-1; f++) {
		if (max < freq[f]) {
			max = freq[f];
			ans = f;
		}
	}
    cout << max<<endl;
	cout << ans;
	return 0;

}