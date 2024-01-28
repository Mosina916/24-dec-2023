#include<iostream>
using namespace std;
int main(){
	// int arr[5]={3,2,4,5,1};

	int arr[]={3,2,4,5,1};
	int n=sizeof(arr)/sizeof(int);
	// int arr[5]={3,2};
	// int arr[5]={0};
	// int arr[]={0};

	for (int i = 0; i <=n-1; ++i)
	{
		cout<<arr[i]<<" ";
	}



	return 0;
}