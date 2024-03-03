#include<iostream>
using namespace std;
int firstindexof7(int *arr,int n,int i){
	// base case
	if(i==n){
		return -90;

	}
	

	// rec case
	if(arr[i]==7){
		return i;
	}
	return firstindexof7(arr,n,i+1);
}
int main(){
	int arr[]={17,4,2,17,17,7};
	int n=sizeof(arr)/sizeof(int);
	int t=firstindexof7(arr,n,0);
	if(t<0){
		cout<<"element is not present "<<endl;
	}
	else{
		cout<<"element is present at "<<t<<endl;

	}


	return 0;
}