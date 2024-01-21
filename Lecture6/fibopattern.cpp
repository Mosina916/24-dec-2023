#include<iostream>
using namespace std;
int main(){

	int n;
	cin>>n;
	if(n==1){
		cout<<0<<endl;
		return 0;
	}

	cout<<0<<endl;
	cout<<1<<'\t'<<1<<endl;


	int a=1;
	int b=1;
	int c=a+b;//2
	int rowno=1;
	while(rowno<=n-2){

	int st=1;
	while(st<=rowno+2){
		cout<<c<<'\t';
		a=b;
		b=c;
		c=a+b;
		st=st+1;
	}

	cout<<endl;
	rowno=rowno+1;
}




	return 0;
}