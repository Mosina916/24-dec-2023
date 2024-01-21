#include<iostream>
using namespace  std;
int main(){
	int n,no;
	cin>>n;//7

	int ans=0;
	int c=1;
	while(c<=n){
		cin>>no;
		ans=ans^no;
		c=c+1;
	}
	cout<<ans<<endl;
	
	return 0;
}