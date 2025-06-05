#include <iostream>
using namespace std;
int main() {
	int intial, final, step_value;
	cin >> intial;
	cin>> final;
	cin>>step_value;
	for (int i = intial; i <= final; i = i + step_value)
	{
		cout<<i<<" "<<5*(i-32)/9<<" "<<endl;
	}

	return 0;
}