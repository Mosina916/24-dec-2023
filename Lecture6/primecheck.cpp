#include<iostream>
using namespace std;
int main(){
	int no;
	cin>>no;

	int i=2;
	while(i<=no-1){
		if(no%i==0){
			cout<<"not prime"<<endl;
			break;
		}
		i=i+1;
	}

	if(i==no){
		cout<<"prime"<<endl;
	}
	



	return 0;
}