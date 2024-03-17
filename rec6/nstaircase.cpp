#include<iostream>
#include<cmath>
using namespace std;
// max jumps=3;
int nstaircase(int n,int mj){//5
	// base case
	if(n<0){
		return 0;
	}
	if(n==0){
		return 1;
	}


	// rec case
	int ans=0;
	for(int i=1;i<=mj;i++){
		ans=ans+nstaircase(n-i,mj);
	}

	return ans;

	// return nstaircase(n-1)+nstaircase(n-2)+nstaircase(n-3);


}

int main(){

	int n,mj;
	cin>>n>>mj;
	cout<<nstaircase(n,mj)<<endl;



	return 0;
}