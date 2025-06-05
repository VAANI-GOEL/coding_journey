#include <iostream>
using namespace std;
int main() {
	char x = '!';
	for (int i = 33; i <= 256; i++)
	{
		cout << i << " - " << x;
		cout << endl;
		x = x + 1;
	}





	return 0;
}