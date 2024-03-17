#include<iostream>
using namespace std;
void f(int n,int i){
	if(i==n+1){
		return;
	}

	cout<<i<<" ";//0
	f(n,i+1);
	// f(n,++i);

}
int main(){
	// print numbers from 0 to n-->4 
	// 0 1 2 3 4
	int n;
	cin>>n;

	f(n,0);




	
	return 0;
}