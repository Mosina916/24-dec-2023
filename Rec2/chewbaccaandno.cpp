#include<iostream>
using namespace std;

int main(){
	string s;//
	getline(cin,s);//"9440"
	int i=0;

	if(s[i]=='9'){
		i++;
	}

	while(s[i]!='\0'){
	int op1=s[i]-'0';//9
	int op2=9-op1;//0
	s[i]=min(op1,op2)+'0';//'0'
	i++;

	}


	cout<<s<<endl;
	


	return 0;
}