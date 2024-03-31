#include<iostream>
using namespace std;
class node{
// public:
	string col;
	string name;
	int p;
public:
	node(string n,string co,int pr){
		col=co;
		name=n;
		p=pr;
	}
	node(){
		// cout<<"hello"<<endl;

	}

	// void print(){
	void getter(){
		cout<<col<<endl;
		cout<<name<<endl;
		cout<<p<<endl;
	}

	// void input(){
	void setter(){
		cin>>col;
		cin>>name;
		cin>>p;
	}


	// stat(){
	// 	cout<<"humpyty dumpty "<<endl;
	// 	cout<<"hey"<<endl;
	// }


};
int main(){
	// node x;

	// x.col="white";
	// x.name="bmw";
	// // x.p=500;
	node y("ABc","Red",290);
	y.print();
	// // cout<<y.col<<endl;
	node z;
	z.input();
	// z.stat();

	z.print();

	// int x;
	// int x;

	// cout<<x.col<<endl;
	// cout<<x.name<<endl;
	// cout<<x.p<<endl;








	return 0;
}