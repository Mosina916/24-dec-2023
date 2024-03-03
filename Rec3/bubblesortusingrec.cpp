#include<iostream>
using namespace std;
void bubblesortrec(int *arr,int n,int step){
	if(step==n){
		return;

	}



	for(int i=0;i<n-step;i++){
	 		if(arr[i]>arr[i+1]){
	 			swap(arr[i],arr[i+1]);
	 		}
	 	}
	 	 // 1 2 3 4 5
	 	bubblesortrec(arr,n,step+1);

}
int main(){
	int arr[100];
	 int n;
	 cin>>n;//5
	 for (int i = 0; i <n; i++)
	 {
	 	cin>>arr[i];//5 4 3 2 1
	 }

	 bubblesortrec(arr,n,1);

	 // 5 4 3 2 1

	 // for(int step=1;step<=n-1;step++){
	 // 	for(int i=0;i<n-step;i++){
	 // 		if(arr[i]>arr[i+1]){
	 // 			swap(arr[i],arr[i+1]);
	 // 			arr[i]=(arr[i]+arr[i+1])-(arr[i+1]=arr[i]);
	 // 		}
	 // 	}
	 // 	4  3 2 1 5

	 // }
	
	// 1 2 3 4 5
	 // print

	 for(int i=0;i<n;i++){
	 	cout<<arr[i]<<" ";

	 }

	 cout<<endl;
	 




	return 0;
}