#include<iostream>
using namespace std;

void mergetwosortedarray(int *arr,int s,int e){
	int i=s;//5
	int mid=(s+e)/2;
	int j=mid+1;//3
	int k=s;//9

	

	int temp[1000];


	while(j<=e&& i<=mid){
		if(arr[i]>arr[j]){//1>4
		temp[k]=arr[j];
		j++;
		k++;
	}
	else{
		temp[k]=arr[i];
		i++;
		k++;

	}

	}
// jab dusra part khatam
	while(j<=e){
		temp[k]=arr[j];
	j++;
	k++;

	}

	// jab dusra part khatam
	while(i<=mid){
		temp[k]=arr[i];
	i++;
	k++;

	}
	// copy temp in arr

	for(int l=s;l<=e;l++){
		arr[l]=temp[l];

	}
	// 1  2 4 6 9
	
}

void mergesort(int *arr,int s,int e){
	if(s==e){
		return;
	}
	// // divide through mid
	int mid=(s+e)/2;
	// sort ist part
	mergesort(arr,s,mid);//1 2 5
	// sort 2nd part
	mergesort(arr,mid+1,e);//
	// merge two sorted arrays
	mergetwosortedarray(arr,s,e);//1 2 5 4 6
}
int main(){
	int arr[]={5,2,1,6,4};//-->1 2 4 5 6
	int n=sizeof(arr)/sizeof(int);

	mergesort(arr,0,n-1);
	//1 2  4 5 6


	for(int l=0;l<=n-1;l++){
		cout<<arr[l]<<" ";
	}

	cout<<endl;
	


	return 0;
}