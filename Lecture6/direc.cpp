#include<iostream>
using namespace std;
int main(){

	// SSSNEEEW
	int x=0;
	int y=0;

	char ch;
	cin>>ch;//S

	while(ch!='\n'){
	if(ch=='S'){
		y=y-1;
	}
	else if(ch=='N'){
		y=y+1;
	}
	else if(ch=='E'){
		x=x+1;
	}
	else{
		x=x-1;//2

	}

	// cin>>ch;
	ch=cin.get();
}

	// cout<<x<<endl;
	// cout<<y<<endl;

	if(x>=0 and y>=0){
		// ist q
		for(int i=1;i<=x;i=i+1){
			cout<<'E';
		}
		for(int i=1;i<=y;i=i+1){
			cout<<'N';
		}
	}
	else if(x<=0 and y>=0){
		// 2nd  q
		for(int i=1;i<=y;i=i+1){
			cout<<'N';
		}
		for(int i=1;i<=abs(x);i=i+1){
			cout<<'W';
		}
	}
	else if(x<=0 and y<=0){
		// 3rd q
		for(int i=1;i<=abs(y);i=i+1){
			cout<<'S';
		}
		for(int i=1;i<=abs(x);i=i+1){
			cout<<'W';
		}
	}
	else{
		// 4th qua
		for(int i=1;i<=x;i=i+1){
			cout<<'E';
		}
		for(int i=1;i<=abs(y);i=i+1){
			cout<<'S';
		}

	}


	cout<<endl;



	return 0;
}