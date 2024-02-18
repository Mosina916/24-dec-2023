#include<iostream>
using namespace std;
void f(int*ptr){
	*ptr=*ptr+20;
	cout<<*ptr<<endl;
}
int main(){
	// int arr={10,12,13};
	int a=10;
	cout<<a<<endl;
	f(&a);//ox...300

	cout<<a<<endl;






	return 0;
}