#include<iostream>
using namespace std;
int main(){
	int a,b,c;
	cin>>a>>b>>c;

	cout<<a<<endl<<b<<endl<<c<<endl;
	if(a>b and a>c){
		cout<<a<<" is largest"<<endl;
	}
	else if(b>a and b>c){
		cout<<b<<" is largest"<<endl;

	}
	else{
		cout<<c<<" is largest"<<endl;

	}

	
	return 0;
}