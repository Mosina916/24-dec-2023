#include<iostream>
#include<cmath>
using namespace std;

string moveallxatend(string s){//s-->""
	if(s.length()==0){
		return "";

	}

	char ch=s[0];//'d'
	if(ch=='x'){
		return moveallxatend(s.substr(1))+ch;


	}
	else{
		return ch+moveallxatend(s.substr(1));
		// dcsfsxxxx

	}


}

int main(){
	// "dcxsxxfsx"-->dcsfsxxxx

	// cxsxxfsx-->d+csfsxxxx

	// // xxcsxxfsx"-->csfsxxxxx
	// xcsxxfsx-->csfsxxxx+x
	
	string s;
	getline(cin,s);
	cout<<moveallxatend(s)<<endl;


	return 0;
}