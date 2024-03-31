#include<iostream>
using namespace std;
int binarysearch(int *arr,int s,int e,int key){
	if(s>e){
		return -1;
	}

	int mid=(s+e)/2;
	if(arr[mid]==key){
		return mid;
	}
	else if(key<arr[mid]){
		return binarysearch(arr,s,mid-1,key);
	}
	else{
		return binarysearch(arr,mid+1,e,key);
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