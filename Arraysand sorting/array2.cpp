#include<iostream>
using namespace std;
int main(){
	int arr[100];
	int n;
	cin>>n;//6
	// input
	for (int i = 0; i <=n-1; i++)
	{
		cin>>arr[i];
	}

	// print
	for (int i = 0; i <=n-1; i++)
	{
		cout<<arr[i]<<" ";
	}


	return 0;
}