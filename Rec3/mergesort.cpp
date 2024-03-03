#include<iostream>
using namespace std;
void mergetwosortedarray(int *arr1,int n,int *arr2,int m){
	int i=n-1;//5
	int j=m-1;//3
	int k=m+n-1;//9


	while(j>=0&& i>=0){
		if(arr1[i]>arr2[j]){//1>7
		arr1[k]=arr1[i];
		i--;
		k--;
	}
	else{
		arr1[k]=arr2[j];
		j--;
		k--;

	}

	}

	while(j>=0){
		arr1[k]=arr2[j];
	j--;
	k--;

	}
	


	
}
int main(){
	int arr1[100]={2,4,6,8,11,13};//sorted
	int n=6;
	int arr2[100]={1,2,5,7};//sorted
	int m=4;

	// merge into sorted -->1 2 2 4 5 6 7 8 11 13


	mergetwosortedarray(arr1,n,arr2,m);

	for(int l=0;l<m+n;l++){
		cout<<arr1[l]<<" ";
	}

	cout<<endl;
	


	return 0;
}