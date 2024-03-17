#include<iostream>
using namespace std;
int main(){
	// int x;
	// x=50;
	int *ptr=new int;
	*ptr=50;

	cout<<*ptr<<endl;

	delete ptr;
	// cout<<*ptr<<endl;
	ptr=NULL;


	return 0;
}