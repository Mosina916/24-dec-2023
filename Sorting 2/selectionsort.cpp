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

	 // selection sort
	 for(int pos=0;pos<=n-2;pos++){
	 	int minindex=pos;
	 	for(int j=pos+1;j<=n-1;j++){
	 		if(arr[minindex]>arr[j]){
	 			minindex=j;
	 		}

	 	}
	 	swap(arr[minindex],arr[pos]);

	 }

	// print
	for (int i = 0; i <=n-1; ++i)
	{
		cout<<arr[i]<<" ";
	}

	cout<<endl;

	

	return 0;
}