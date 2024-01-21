#include<iostream>
using namespace  std;
int main(){
	int n,no;
	cin>>n;//6
	int ans=0;

	int s=1;
	while(s<=n){
		ans=ans^s;//0^1-->1^2^3^4^5^6
	s=s+1;

	}

	// ans==7


	// int c=1;
	// while(c<=n-1){
		// cin>>no;
		// ans=ans^no;


		// c=c+1;
	// }

	// for(int c=1;c<=n-1;c=c+1){
	// 	cin>>no;
	// 	ans=ans^no;

	// }

	int c=1;
	for(;c<=n-1;){
		cin>>no;
		ans=ans^no;
		c=c+1;

	}

	cout<<ans<<endl;

	// for(i;c;u){
	// 	// ?task
	// }


	

	
	return 0;
}