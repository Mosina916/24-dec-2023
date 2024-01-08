// *****
// ****
// ***
// **
// *

#include<iostream>
using namespace std;
int main(){
	int tr;
	cin>>tr;

	int rowno=1;
	while(rowno<=tr){

	// 4th row
	int i=1;
	while(i<=tr-rowno+1){
		cout<<'*'; 
		i=i+1;
	}
	cout<<endl;
	rowno=rowno+1;

}


	return 0;
}