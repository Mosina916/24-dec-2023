#include<iostream>
using namespace  std;

int main(){
	int a=1,b=9,c=-4,d=0;
	if(a++ and d-- and c++){
		cout<<"hello"<<endl;
	}
	else if(--a and ++d and b--){
		cout<<"hii"<<endl;
	}
	else if(b--and ++c){
		cout<<"hey"<<endl;
	}
	else{
		cout<<"coding blocks "<<endl;
	}

	cout<<a<<endl;
	cout<<b<<endl;
	cout<<c<<endl;
	cout<<d<<endl;

	return 0;
}