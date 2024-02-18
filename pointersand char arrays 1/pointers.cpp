#include<iostream>
using namespace std;
int main(){
	int a=10;
	// datatype*name=&bucket;
	
	int *ptr=&a;
	cout<<ptr<<endl;
	cout<<&a<<endl;


	int**dptr=&ptr;
	cout<<&ptr<<endl;
	cout<<dptr<<endl;


	int***tptr=&dptr;
	

	// *ptr-->wo bucket jiska ptr mai adress hai-->a
	// cout<<*ptr<<endl;//10
	cout<<***tptr<<endl;
	

	
	return 0;
}