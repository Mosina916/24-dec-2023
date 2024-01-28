#include<iostream>
using namespace std;
int main(){
	float arr[]={3.2,2.2,5.4,3.1,7.1};

	int n=sizeof(arr)/sizeof(float);
	int i=0;
	int j=n-1;

	while(i<j){
		swap(arr[i],arr[j]);
	i++;
	j--;

	}

	for (int i = 0; i <=n-1; ++i)
	{
		cout<<arr[i]<<" ";
	}
	

	return 0;
}