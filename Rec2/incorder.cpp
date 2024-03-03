#include<iostream>
using namespace std;
void incorder(int n){
	// base case
	if(n==0){
		return;

	}
	
	// rec case
	incorder(n-1);//1 2 3 4
	cout<<n<<" ";	

}
int main(){
	int n;
	cin>>n;

	incorder(n);//5
	// 1 2 3 4 5



	return 0;
}