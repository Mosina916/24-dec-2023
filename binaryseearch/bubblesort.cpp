#include<iostream>
using namespace std;
int main(){
	int arr[100];
	 int n;
	 cin>>n;//5
	 for (int i = 0; i <n; i++)
	 {
	 	cin>>arr[i];//5 4 3 2 1
	 }

	 // 1 2 3 4 5

	 for(int step=1;step<=n-1;step++){
	 	bool kyaswaphoga=false;
	 	cout<<"step no is "<<step<<endl;

	 	for(int i=0;i<=n-step-1;i++){
	 		if(arr[i]>arr[i+1]){
	 		swap(arr[i],arr[i+1]);
	 		kyaswaphoga=true;
	 			// arr[i]=(arr[i]+arr[i+1])-(arr[i+1]=arr[i]);
	 		}
	 	}
	 	if(kyaswaphoga==false){
	 		break;
	 	}


	 }
	
	// 1 2 3 4 5
	 // print

	 for(int i=0;i<n;i++){
	 	cout<<arr[i]<<" ";

	 }

	 cout<<endl;
	 




	return 0;
}