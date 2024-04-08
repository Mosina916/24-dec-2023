#include<iostream>
#include <algorithm>
using namespace std;
bool amiabletoplaceccowsatdistmid(int *arr,int dist,int n,int tc){
	int ccabhitak=1;
	int pichekicow=arr[0];
	for(int i=1;i<n;i++){
		if(arr[i]-pichekicow>=dist){
		// tou cow rakh sakte hai
		ccabhitak++;//3
		pichekicow=arr[i];
		if(tc==ccabhitak){
			return true;
		}

	}

	}
	if(ccabhitak<tc){
		return false;
	}

	return true;
	

}
int main(){
	int n,c;
	cin>>n>>c;
	int arr[1000000];
	for (int i = 0; i <n; ++i)
	{
		cin>>arr[i];

	}

	// 1 2 8 4 9
	sort(arr,arr+n);//1 2 4 8 9

	int s=0;
	int e=arr[n-1]-arr[0];//8
	int fans;
	while(s<=e){
		int mid=(s+e)/2;//3
	if(amiabletoplaceccowsatdistmid(arr,mid,n,c)){
		fans=mid;//3
		s=mid+1;
	}
	else{
		e=mid-1;
	}


	}

	cout<<fans<<endl;
	






	return 0;
}