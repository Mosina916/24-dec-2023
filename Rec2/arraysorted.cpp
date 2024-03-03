#include<iostream>
using namespace std;
bool isarraysorted(int *arr,int n,int i){
	if(i==n-1){
		return true;

	}

	if(arr[i]<=arr[i+1] and isarraysorted(arr,n,i+1)){
		return true;

	}
	return false;

}
int main(){
	int arr[]={2,4,5,3,6};
	int n=sizeof(arr)/sizeof(int);

	cout<<isarraysorted(arr,n,0)<<endl;



	return 0;
}