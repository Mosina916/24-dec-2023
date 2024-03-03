#include<iostream>
using namespace std;
string arr[]={"zero","one","Two","three","four","five","six","seven","eight","Nine"};
void incwordprint(int n){
	// base case
	if(n==0){
		return;

	}
	// rec case
	incwordprint(n/10);
	cout<<arr[n%10]<<" ";
}
int main(){
	int n;
	cin>>n;

	incwordprint(n);



	return 0;
}