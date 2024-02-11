#include<iostream>
using namespace std;
int main(){
	char ch='a';
	cout<<ch<<endl;
	cout<<sizeof(ch)<<endl;

	// cout<<(int*)&ch<<endl;
	// cout<<(float*)&ch<<endl;
	cout<<(void*)&ch<<endl;//fooling of compiler






	return 0;
}