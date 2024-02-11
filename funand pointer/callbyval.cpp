#include<iostream>
using namespace std;
void f(int n){
	n=n+10;
	cout<<n<<endl;
}
int main(){

	int a=10;
	cout<<a<<endl;
	f(a);
	cout<<a<<endl;

	
	return 0;
}