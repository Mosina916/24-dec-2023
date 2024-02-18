#include <iostream>
using namespace std;

int main(){
	char arr[][5]={
		{'A','b','c','d','\0'},
		{'t','q','c','e','\0'},
		{'o','b','u','y','\0'},

	};

	// cout<<arr<<endl;//Abcd


	cout<<&arr[0][0]<<endl;
	cout<<&arr[1][0]<<endl;
	cout<<&arr[2][0]<<endl;


	


	return 0;
}