#include <iostream>

using namespace std;
int main(){
	int n;
	cin>>n;
	int number;
	cin>>number;
	int min=number;
	int x=1;
	while(x<=n-1){
		cin>>number;
		if(min>number){
			min=number;}
			x=x+1;
		
	} 
	cout<<min<<' ';
	return 0;
}

//https://hack.codingblocks.com/app/contests/2049
