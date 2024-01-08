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
		// for any row

	// spaces 
	int sp=1;
	while(sp<=tr-rowno){
		cout<<' ';
		sp=sp+1;
	}


	// stars
	int st=1;
	while(st<=2*rowno-1){
		cout<<'*';
		st=st+1;
	}

	cout<<endl;
	rowno=rowno+1;

	}

	


	return 0;
}