#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	// 1 to n -->10
	// 1 2 3 4 5 6 7 8 9 10\

	// int no=1;
	// while(no<=n){
		// cout<<no<<" ";
		// no=no+1;
	// }
		for(int no=1;no<=n;no=no+1){
			if(no==7){
				continue;
			}
			if(no==4){
				continue;
			}
			cout<<no<<" "; 1 2 3 4 5 6 8 9 10

		}





	return 0;
}