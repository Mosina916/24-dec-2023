#include<iostream>
#include <algorithm>
using namespace std;

bool kyapadhsaktehai(int scap,int *books,int tb,int ts){
	int cscount=1;
	int ccpages=0;//12
	for(int i=0;i<tb;i++){
		if(ccpages+books[i]>scap){//190>120
		cscount++;//3
		if(cscount>ts){
			// return false;
			return false;
		}
		ccpages=books[i];//100
		
		

	}
	else{
		ccpages=ccpages+books[i];//113
	}

	}
	if(cscount>ts){
		return false;
	}

	return true;
	


}

int bookallocation(int *books,int tb,int ts){
	int sum=0;
		for (int i = 0; i <tb; ++i)
		{
			
			sum+=books[i];
			
		}
	int s=books[tb-1];
	int e=sum;
	int ans=s;

	while(s<=e){
		int mid=(s+e)/2;//146
		// cout<<mid<<endl;
	if(kyapadhsaktehai(mid,books,tb,ts)){
		
		ans=mid;//117
		e=mid-1;

	}
	else{
		s=mid+1;

	}


	}

	return ans;
	




}
int main(){
	int t;
	cin>>t;
	int books[1000005];
	while(t--){
		int tb,ts;//4 2
		cin>>tb>>ts;
		// sum=0;
		for (int i = 0; i <tb; ++i)
		{
			cin>>books[i];
			// sum+=books[i];
			
		}

		cout<<bookallocation(books,tb,ts)<<endl;

	}






	return 0;
}