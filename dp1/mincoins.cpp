#include<iostream>
using namespace std;
// simple rec
int mintsteps(int n){
	// base case
	if(n==1){
		return 0;
	}


	// rec case
	int x=INT_MAX,y=INT_MAX,z=INT_MAX;
	x=mintsteps(n-1);//11
	if(n%2==0){
		y=mintsteps(n/2);
	}
	if(n%3==0){
		z=mintsteps(n/3);
	}

	return min(x,min(y,z))+1;
}

// simple rec
int mincoinstd(int n,int *arr){
	// base case
	if(n==1){
		return arr[n]=0;
	}

	if(arr[n]!=-1){
		return arr[n];
	}


	// rec case
	int x=INT_MAX,y=INT_MAX,z=INT_MAX;
	x=mincoinstd(n-1,arr);//11
	if(n%2==0){
		y=mincoinstd(n/2,arr);
	}
	if(n%3==0){
		z=mincoinstd(n/3,arr);
	}
	return arr[n]=min(x,min(y,z))+1;
}

int bottmup(int n){//12
	int *arr=new int[n+1];
	arr[1]=0;
	for(int cn=2;cn<=n;cn++){
		int x=INT_MAX,y=INT_MAX,z=INT_MAX;
	x=arr[cn-1];//0;
	if(cn%2==0){
		y=arr[cn/2];
	}
	if(cn%3==0){
		z=arr[cn/3];
	}
	arr[cn]=min(x,min(y,z))+1;

	}

	for (int i = 0; i <=n; ++i)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	return arr[n];
	

}

int main(){
	int n;
	cin>>n;//12
	cout<<bottmup(n)<<endl;//o(n)
	cout<<mintsteps(n)<<endl;//o(3^n)

	// int *arr=new int[n+1];//13

	// for (int i = 0; i <=n; ++i)
	// {
	// 	arr[i]=-1;

	// }


	// cout<<mincoinstd(n,arr)<<endl;

	// for (int i = 0; i <=n; ++i)
	// {
	// 	cout<<arr[i]<<" ";
	// }

	// cout<<endl;



	return 0;
}