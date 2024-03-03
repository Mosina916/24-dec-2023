#include<iostream>
using namespace std;
void decorder(int n){
	// base case
	if(n==0){
		return;
	}
	// rec case
	cout<<n<<endl;
	decorder(n-1);

}
int main(){
	int n;
	cin>>n;

	decorder(n);



	return 0;
}