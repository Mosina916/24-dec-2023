#include<iostream>
using namespace std;
int main(){
	// char ch;
	// cin>>ch;
	// if(ch>='A' and ch<='Z'){
	// 	cout<<"UPPER CASE"<<endl;

	// }
	// else if(ch>='a' and ch<='z'){
	// 	cout<<"lower case"<<endl;

	// }
	// else{
	// 	cout<<"some other char "<<endl;

	// }
	// if(ch>=65 and ch<=90){
	// 	cout<<"UPPER CASE"<<endl;

	// }
	// else if(ch>=97 and ch<=122){
	// 	cout<<"lower case"<<endl;

	// }
	// else{
	// 	cout<<"some other char "<<endl;

	// }

	char ch;
	cin>>ch;//j
	if(isupper(ch)){
		cout<<"UPPER CASE"<<endl;

	}
	else if(islower(ch)){
		cout<<"lower case"<<endl;

	}
	else{
		cout<<"some other char "<<endl;

	}


	return 0;
}