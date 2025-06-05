#include <iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	for (int row = 1; row <= n ; row = row + 1 )
	{
		char x = 'A';
		for (int i = 1; i <= row; i = i + 1)
		{

			cout << x << " ";
			x = x + 1;

		}
		cout << endl;
	}




	return 0;
}