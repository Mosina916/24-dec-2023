#include<iostream>
using namespace std;
int main(){
	int no;
	cin>>no;//13
	int c=0;

	while(no>0){
		if((no&1)==1){
			c=c+1;
		}
		no=no>>1;
	}
	cout<<c<<endl;

	



	return 0;
}