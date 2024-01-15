// 1
// 23
// 456
// 78910
#include<iostream>
using namespace std;
int main(){
	int tr;
	cin>>tr;
	int stno=1;

	int rowno=1;
	while(rowno<=tr){

	// 4th row
		
	int i=1;
	while(i<=rowno){
		// cout<<'*'; 
		cout<<stno<<'\t';
		stno=stno+1;
		i=i+1;
	}
	cout<<endl;
	rowno=rowno+1;

}


	return 0;
}