#include<iostream>
using namespace std;
int binarysearch(int *arr,int s,int e,int key){

	while(s<=e){
			int mid=(s+e)/2;
	if(arr[mid]==key){
		return mid;
	}
	else if(key<arr[mid]){
		e=mid-1;
	}
	else{
		s=mid+1;
	}

	}

	return -1;

}
int main(){
	int arr[]={2,4,5,7,16,19,20};
	int key;
	cin>>key;
	int n=sizeof(arr)/sizeof(int);

	cout<<binarysearch(arr,0,n-1,key)<<endl;



	return 0;
}