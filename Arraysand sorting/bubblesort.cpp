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

	 // bubblesort 

	// for(int step=1;step<=n-1;step++){
	// 	for(int i=0;i<=n-2;i++){
	// 		if(arr[i]>arr[i+1]){
	// 			swap(arr[i],arr[i+1]);
	// 		}
	// 	}
	// }

	 	for(int step=1;step<=n-1;step++){
		for(int i=0;i<=n-1-step;i++){
			if(arr[i]>arr[i+1]){
				swap(arr[i],arr[i+1]);
			}
		}
	}

	// print
	for (int i = 0; i <=n-1; ++i)
	{
		cout<<arr[i]<<" ";
	}

	cout<<endl;

	

	return 0;
}