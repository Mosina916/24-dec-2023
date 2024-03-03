#include<iostream>
using namespace std;
bool check7ornot(int *arr,int n){
	// base case
	if(n==0){
		return false;
	}


	// rec case
	if(arr[0]==7 ||check7ornot(arr+1,n-1)){
		return true;
	}
	return false;
}
int main(){
	int arr[]={3,4,2,7,7,9};
	int n=sizeof(arr)/sizeof(int);
	cout<<check7ornot(arr,n)<<endl;


	return 0;
}