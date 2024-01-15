	// *
 //   ***
 //  *****
 // *******

#include<iostream>
using namespace std;
int main(){
	int tr;
	cin>>tr;


	int rowno=1;
	while(rowno<=tr){
	
	// spaces
	int sp=1;
	while(sp<=tr-rowno){
		cout<<" ";
		sp=sp+1;
	}


	// stars
	// int stno=1;
	int st=1;
	while(st<=rowno){
		// cout<<stno;
		// stno=stno+1;
		st=st+1;
	}


	// hash
	// int stnoo=rowno-1;
	int hc=1;
	while(hc<=rowno-1){
		cout<<"#";
		// cout<<stnoo;
		// stnoo=stnoo-1;
		hc=hc+1;
	}

	cout<<endl;
	rowno=rowno+1;
}
	


	return 0;
}