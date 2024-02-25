#include<iostream>
using namespace std;
// isarraysorted1(int arr[])

bool isarraysorted1(int *arr,int n){
	// b case
	if(n==1){
		return true;
	}


	// rec case
	if(isarraysorted1(arr,n-1) and arr[n-2]<=arr[n-1]){
		return true;
	}
	return false;
}

bool isarraysorted2(int *arr,int n){
	// b case
	if(n==1){
		return true;
	}


	// rec case
	if(isarraysorted2(arr+1,n-1) and arr[0]<=arr[1]){
		return true;
	}
	return false;
}

int main(){

	// int arr[]={3,5,7,19,11};
	// int n=sizeof(arr)/sizeof(int);
	int arr[100];

	int n;
	cin>>n;
	for (int i = 0; i <n; ++i)
	{
		cin>>arr[i];
	}

	// if(isarraysorted1(arr,n)){
	// 	cout<<"array is sorted "<<endl;

	// }
	// else{
	// 	cout<<"array is not sorted "<<endl;
	// }


	if(isarraysorted2(arr,n)){
		cout<<"array is sorted "<<endl;

	}
	else{
		cout<<"array is not sorted "<<endl;
	}
	
	

	return 0;
}