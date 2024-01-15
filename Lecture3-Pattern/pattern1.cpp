#include<iostream>
using namespace std;
int main(){
	int tr;
	cin>>tr;//3
	if(tr==1){
		cout<<'*'<<endl;
		return 0;
		
	}
	



	// part 1\
	// spaces 
	int sp=1;
	while(sp<=tr-1){
		cout<<" ";
		sp=sp+1;
	}

	// stars
	int st=1;
	while(st<=tr){
		cout<<"*";
		st=st+1;
	}
	cout<<endl;




	// part 2
	int rowno=1;
	while(rowno<=tr-2){

	// spaces 
	int spp=1;
	while(spp<=tr-1-rowno){
		cout<<" ";
		spp=spp+1;
	}


	// stars
	cout<<"*";


	// spacs
	int sppp=1;
	while(sppp<=tr-2){
		cout<<" ";
		sppp=sppp+1;
	}


	// stars
	cout<<'*';
	cout<<endl;
	rowno=rowno+1;
}





	// part 3


	int sttt=1;
	while(sttt<=tr){
		cout<<'*';
		sttt=sttt+1;
	}
	cout<<endl;




	return 0;
}