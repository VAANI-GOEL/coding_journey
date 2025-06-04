#include <iostream>
using namespace std;
int main(){
int n;
cin>>n;
int number;
cin>>number;
int max=number;
int i=1;
while(i<=n-1){
	cin>>number;
	if(max<number){
		max=number;
	}
	i=i+1;
}
cout<<max<<' ';


	return 0;
}