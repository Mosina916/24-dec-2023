#include<iostream>
using namespace std;
int lastindexof7(int *arr,int n,int i){
	// base case
	if(i==-1){
		return -87;
	}
	// rec case
	if(arr[i]==7){
		return i;
	}
	return lastindexof7(arr,n,i-1);
}
int main(){
	int arr[]={7,87,2,7,17,70};
	int n=sizeof(arr)/sizeof(int);
	int t=lastindexof7(arr,n,n-1);
	if(t<0){
		cout<<"element is not present "<<endl;
	}
	else{
		cout<<"element is present at "<<t<<endl;

	}
	return 0;
}