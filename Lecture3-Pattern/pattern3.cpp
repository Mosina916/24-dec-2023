// 1
// 12
// 123
// 1234
#include<iostream>
using namespace std;
int main(){
	int tr;
	cin>>tr;

	int rowno=1;
	while(rowno<=tr){

	// 4th row
		int stno=1;
	int i=1;
	while(i<=rowno){
		// cout<<'*'; 
		cout<<stno;
		stno=stno+1;
		i=i+1;
	}
	cout<<endl;
	rowno=rowno+1;

}


	return 0;
}