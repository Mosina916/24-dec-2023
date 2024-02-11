#include<iostream>
using namespace std;
void f(int &n){//fun decleartion
	// fun definition
	n=n+10;
	cout<<n<<endl;
}
int main(){

	int a=10;
	cout<<a<<endl;
	f(a);//function call /invoke
	cout<<a<<endl;

	
	return 0;
}