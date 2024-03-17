#include<iostream>
#include<cmath>
using namespace std;
string replaceallpi(string s){
	if(s.length()<=1){
		return s;
	}


	string x=s.substr(0,2);
	if(x=="pi"){
		return "3.14"+replaceallpi(s.substr(2));

	}
	else{
		return s[0]+replaceallpi(s.substr(1));

	}
}

int main(){

	string s;
	getline(cin,s);
	cout<<replaceallpi(s)<<endl;

	

	return 0;
}