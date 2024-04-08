#include<iostream>
#include <algorithm>
using namespace std;
int kadenesalgo(int *arr,int n){
	int cs=0;
	int ms=INT_MIN;
	for(int i=0;i<n;i++){
		cs=cs+arr[i];
	ms=max(ms,cs);
	if(cs<0){
		cs=0;
	}

	}

	return ms;
	

}

int main(){
	int n;
	cin>>n;
	int arr[100000];
	for (int i = 0; i <n; ++i)
	{
		cin>>arr[i];

	}


	cout<<kadenesalgo(arr,n)<<endl;
	





	return 0;
}