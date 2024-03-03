#include<iostream>
using namespace std;
string arr[]={"zero","one","Two","three","four","five","six","seven","eight","Nine"};
void reversewordprint(int n){
	// base case
	if(n==0){
		return;

	}
	// rec case

	cout<<arr[n%10]<<" ";
	reversewordprint(n/10);


}
int main(){
	int n;
	cin>>n;

	reversewordprint(n);



	return 0;
}