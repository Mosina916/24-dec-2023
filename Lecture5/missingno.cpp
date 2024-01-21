#include<iostream>
using namespace  std;
int main(){
	int n,no;
	cin>>n;//6
	int p=n*(n+1)/2;//21
	int sum=0;


	int c=1;
	while(c<=n-1){
		cin>>no;//5
		sum=sum+no;


		c=c+1;
	}


	cout<<p-sum<<endl;

	
	return 0;
}