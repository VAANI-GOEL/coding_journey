#include <iostream>
using namespace std;
int main(){
int n;
cin>>n;
int x=1;
while(x<=n){ 
	int y=1;
	while(y<=x){
		cout<<"*";
		y=y+1;
	}
      x=x+1;
      cout<<endl;
}

	return 0;
}
