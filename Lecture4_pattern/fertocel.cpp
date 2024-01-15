#include<iostream>
using namespace std;
int main(){

	int inti,final,step;
	cin>>inti>>final>>step;

	int fer=inti;
	while(fer<=final){
		int cel=(5.0/9)*(fer-32);
		cout<<fer<<'\t'<<cel<<endl;
		fer=fer+step;
	}
	


	return 0;
}