#include<iostream>
using namespace std;
int s=40;
int main(){
	int cochar=0;
	char ch;
	ch=cin.get();

	while(ch!='$'){
		cochar=cochar+1;
		ch=cin.get();
	}

	cout<<cochar<<endl;


	return 0;
}