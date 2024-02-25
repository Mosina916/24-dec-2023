#include<iostream>
using namespace std;
// pos start 1 
// int fibo(int pos){
// 	// base case
// 	if(pos==1){
// 		return 0;

// 	}
// 	if(pos==2){
// 		return 1;

// 	}
	

// 	// rec case // 
// 	return fibo(pos-1)+fibo(pos-2);

	
// }

// pos start 0


int fibo(int pos){
	// base case
	if(pos==0||pos==1){
		return pos;

	}
	// rec case // 
	return fibo(pos-1)+fibo(pos-2);	
}

 
int main(){
	int pos;
	cin>>pos;//6

	cout<<fibo(pos)<<endl;

	return 0;
}