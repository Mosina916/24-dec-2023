#include<iostream>
using namespace std;
int sum1(int *arr,int n){
 	if(n==0){
 		return 0;
 	}

 	return arr[0]+sum1(arr+1,n-1);
	
}
int sum2(int *arr,int n){
 	if(n==0){
 		return 0;
 	}

 	return arr[n-1]+sum2(arr,n-1);
	
}

int sum3(int *arr,int n,int i){
 	if(i==n){
 		return 0;
 	}

 	return arr[i]+sum3(arr,n,i+1);
	
}
int main(){
	int arr[]={2,4,5,3,6};
	int n=sizeof(arr)/sizeof(int);

	cout<<sum1(arr,n)<<endl;
	cout<<sum2(arr,n)<<endl;
	cout<<sum3(arr,n,0)<<endl;



	return 0;
}