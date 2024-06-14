#include<iostream>
using namespace std;
// simple rec
int mincoins(int amount,int* coins,int n){
	// base case
	if(amount==0){
		return 0;
	}
	


	// rec case
	int ans=INT_MAX;
	for(int i=0;i<n;i++){
	int bachaamt=amount-coins[i];//
	if(bachaamt>=0){
		int rans=mincoins(bachaamt,coins,n);
		if(rans<ans){
			ans=rans+1;
		}
	}
}
return ans;
	
}


int mincoinstd(int amount,int* coins,int n,int *arr){
	// base case
	if(amount==0){
		return arr[amount]=0;
	}
	if(arr[amount]!=INT_MAX){
		return arr[amount];
	}
	


	// rec case
	int ans=INT_MAX;
	for(int i=0;i<n;i++){
	int bachaamt=amount-coins[i];//
	if(bachaamt>=0){
		int rans=mincoinstd(bachaamt,coins,n,arr);
		if(rans<ans){
			ans=rans+1;
		}
	}
}
return arr[amount]=ans;
	
}


int main(){
	int amount;
	cin>>amount;//13

	int coins[]={9,6,5,1};
	int n=sizeof(coins)/sizeof(int);

	cout<<mincoins(amount,coins,n)<<endl;
	int *arr=new int[amount+1];
	for (int i = 0; i <=amount; ++i)
	{
		arr[i]=INT_MAX;
		
	}

	cout<<mincoinstd(amount,coins,n,arr)<<endl;

	for (int i = 0; i <=amount; ++i)
	{
		cout<<arr[i]<<" ";
	}

	cout<<endl;


	return 0;
}