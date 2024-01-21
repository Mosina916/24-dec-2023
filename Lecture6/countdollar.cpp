#include<iostream>
using namespace std;
int s=40;
int main(){
	int cochar=0;
	char ch;
	cin>>ch;//'h'

	while(ch!='$'){
		cochar=cochar+1;
		cin>>ch;
	}

	cout<<cochar<<endl;


	return 0;
}