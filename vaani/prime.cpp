#include <iostream>
using namespace std;
int main(){
int a;
cin>>a;
int i=2;
while(i<=a-1){
	
	if(a%i==0){
		cout<<"not prime";
		return 0;}
	i=i+1;
	

}	 
cout<<"prime";


	return 0;
}