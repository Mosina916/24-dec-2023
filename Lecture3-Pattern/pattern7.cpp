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
	int st=1;
	while(st<=rowno){
		cout<<"*";
		st=st+1;
	}


	// hash
	int hc=1;
	while(hc<=rowno-1){
		cout<<"#";
		hc=hc+1;
	}

	cout<<endl;
	rowno=rowno+1;
}
	


	return 0;
}