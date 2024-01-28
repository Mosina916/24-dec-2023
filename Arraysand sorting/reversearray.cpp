#include<iostream>
using namespace std;
int main(){
	float arr[]={3.2,2.2,5.4,3.1,7.1};

	int n=sizeof(arr)/sizeof(float);
	// reverse print
	for (int i = n-1; i>=0;i--)
	{
		cout<<arr[i]<<" ";
	}

	cout<<endl;

	return 0;
}