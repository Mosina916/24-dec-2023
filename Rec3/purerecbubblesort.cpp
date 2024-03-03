#include<iostream>
using namespace std;
void bubblesortrec(int *arr,int n,int step,int i){ 
	if(step==n){
		return;

	}
	if(i==n-step){
		bubblesortrec(arr,n,step+1,0);

	}
	else{
		if(arr[i]>arr[i+1]){
	 			swap(arr[i],arr[i+1]);
	 			
	 		}
	 		bubblesortrec(arr,n,step,i+1);


	}

	



}
int main(){
	int arr[100];
	 int n;
	 cin>>n;//5
	 for (int i = 0; i <n; i++)
	 {
	 	cin>>arr[i];//5 4 3 2 1
	 }

	 bubblesortrec(arr,n,1,0);
	
	 // print

	 for(int i=0;i<n;i++){
	 	cout<<arr[i]<<" ";

	 }

	 cout<<endl;
	 




	return 0;
}