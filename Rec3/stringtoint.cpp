#include<iostream>
using namespace std;
int stringconvertint(string s,int l){//""  4
	// base case
	if(l==0){
		return 0;
	}


// rec case
		int x=s[l-1]-'0';//'4'-'0' 4
		return stringconvertint(s,l-1)*10+x;//"653"-->6534
}
int main(){
	string s;
	getline(cin,s);//"6534"-->6534

	int l=s.length();//4
	cout<<stringconvertint(s,l)<<endl;




	return 0;
}