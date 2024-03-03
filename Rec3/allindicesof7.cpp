#include<iostream>
using namespace std;
void allindiciesof7(int *arr,int n,int i){
	// base case
	if(i==n){
		return;
	}


	// rec case
	if(arr[i]==7){
		cout<<i<<" ";//0 3 5 7
	}

	allindiciesof7(arr,n,i+1);

}
int main(){
	int arr[]={7,4,2,7,17,7,4,7,2};//0 3 5 7
	int n=sizeof(arr)/sizeof(int);

	allindiciesof7(arr,n,0);
	


	return 0;
}