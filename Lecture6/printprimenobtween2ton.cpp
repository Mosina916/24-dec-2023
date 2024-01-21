#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;//11


	for(int no=2;no<=n;no=no+1){

	int i=2;
	while(i<=no-1){
		if(no%i==0){
			
			break;
		}
		i=i+1;
	}

	if(i==no){
		cout<<no<<endl;
	}

}
	



	return 0;
}