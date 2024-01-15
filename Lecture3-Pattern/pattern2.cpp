#include<iostream>
using namespace std;
int main(){
	int tr;
	cin>>tr;
	if(tr==1){
		cout<<"*"<<endl;

		return 0;
	}


	// part 1
	int st=1;
	while(st<=tr){
		cout<<'*'<<'\t';
		st=st+1;
	}
	cout<<endl;



	// part 2

	int rowno=1;
	while(rowno<=(tr-1)/2){

	// stars
	int stt=1;
	while(stt<=(tr+1)/2-rowno){
		cout<<"*"<<'\t';
		stt=stt+1;

	}

	// spaces
	int spp=1;
	while(spp<=2*rowno-1){
		cout<<" "<<'\t';
		spp=spp+1;

	}

	// stars
	int sttt=1;
	while(sttt<=(tr+1)/2-rowno){
		cout<<"*"<<'\t';
		sttt=sttt+1;

	}


	cout<<endl;
	rowno=rowno+1;
}


	

	// part 3
	int rownoo=1;
	while(rownoo<=((tr-1)/2)-1){
	// stars
	int s=1;
	while(s<=rownoo+1){
		cout<<"*"<<'\t';
		s=s+1;

	}

// spaces 
	int spa=1;
	while(spa<=(tr-2)-(2*rownoo)){
		cout<<" "<<'\t';
		spa=spa+1;

	}




// stars
	int ss=1;
	while(ss<=rownoo+1){
		cout<<"*"<<'\t';
		ss=ss+1;

	}

	cout<<endl;
	rownoo=rownoo+1;
}




	// part 4

	int str=1;
	while(str<=tr){
		cout<<'*'<<'\t';
		str=str+1;
	}
	cout<<endl;






	return 0;
}