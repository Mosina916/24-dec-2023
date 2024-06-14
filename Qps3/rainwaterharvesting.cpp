#include<iostream>
#include<queue>
using namespace std;
int hb[1000000];

int lhm[1000000];

int rhm[1000000];

int main(){


	int t;
	cin>>t;

	while(t--){
		int n;
	cin>>n;

	for (int i = 0; i <n; ++i)
	{
		cin>>hb[i];
	}

	lhm[0]=hb[0];
	for (int i = 1; i <n ; ++i)
	{
		lhm[i]=max(lhm[i-1],hb[i]);
	}


	rhm[n-1]=hb[n-1];
	for (int i = n-2; i>=0 ; i--)
	{
		rhm[i]=max(rhm[i+1],hb[i]);
	}

	int water=0;


	for(int k=0;k<n;k++){
		water+=min(lhm[k],rhm[k])-hb[k];

	}


	cout<<water<<endl;


	}
	




	return 0;
}