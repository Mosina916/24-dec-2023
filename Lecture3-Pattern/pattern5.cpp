// A
// AB
// ABC
// ABCD
#include<iostream>
using namespace std;
int main(){
	int tr;
	cin>>tr;

	int rowno=1;
	while(rowno<=tr){

	// 4th row
		char stch='A';
	int i=1;
	while(i<=rowno){
		// cout<<'*'; 
		cout<<stch;
		stch=stch+1;
		i=i+1;
	}
	cout<<endl;
	rowno=rowno+1;

}


	return 0;
}