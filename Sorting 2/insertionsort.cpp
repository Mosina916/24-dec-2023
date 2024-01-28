#include<iostream>
using namespace std;
int main(){
	// int arr[1000000];

	 int arr[100];
	 int n;
	 cin>>n;//7
	 for (int i = 0; i <=n-1; ++i)
	 {
	 	cin>>arr[i];//4 1 6 14 6 7 

	 }
	 int j;

	 // insertionsort sort

	 for (int i = 1; i <=n-1; ++i)
	 {

	 	int ele=arr[i];
	 	for(j=i-1;j>=0;j--){
	 		if(ele<arr[j]){
	 			arr[j+1]=arr[j];

	 		}
	 		else{
	 			break;
	 		}
	 	}

	 	arr[j+1]=ele;
	 }

	 

	// print
	for (int i = 0; i <=n-1; ++i)
	{
		cout<<arr[i]<<" ";
	}

	cout<<endl;

	

	return 0;
}