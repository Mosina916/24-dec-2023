#include<iostream>
using namespace std;

// simple rec
int fibo(int n){
	if(n==0 ||n==1){
		return n;

	}
	// rec 
	return fibo(n-1)+fibo(n-2);
}

// top down
int fibotd(int n,int *arr){
	if(n==0 ||n==1){
		return arr[n]=n;

	}
	if(arr[n]!=-1){
		return arr[n];
	}
	// rec 
	return arr[n]=fibotd(n-1,arr)+fibotd(n-2,arr);
}

// bottomup
int bottomup(int n){
	int *arr=new int[n+1];
	arr[0]=0;
	arr[1]=1;
	for (int i = 2; i <=n ; ++i)
	{
		arr[i]=arr[i-1]+arr[i-2];
	}


	for (int i = 0; i <=n; ++i)
	{
		cout<<arr[i]<<" ";
	}

	cout<<endl;

	return arr[n];
}


// bottom up

int main(){
	int n;
	cin>>n;//5
	// int arr[n+1];
	// int *arr=new int[n+1];
	// for (int i = 0; i <=n; ++i)
	// {
	// 	arr[i]=-1;
	// }

	// cout<<fibotd(n,arr)<<endl;//td 

	// for (int i = 0; i <=n; ++i)
	// {
	// 	cout<<arr[i]<<" ";
	// }
	// cout<<endl;


	cout<<bottomup(n)<<endl;//td 0(n)


	cout<<fibo(n)<<endl;//2^n




	return 0;
}