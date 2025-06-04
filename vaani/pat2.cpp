#include <iostream>
using namespace std;
int main(){
int n;
cin>>n;

int x=1;
int z=1;
while(x<=n){
	int y=1;
	while(y<=x){
cout<<z<<' ';
z=z+1;
		y=y+1;
	}
	x=x+1;
	cout<<endl;
	
}





	return 0;
}