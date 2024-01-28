#include<iostream>
using namespace std;
int main(){
	// int arr[1000000];

	 int arr[100];
	 int n;
	 cin>>n;//7
	 for (int i = 0; i <=n-1; ++i)
	 {
	 	cin>>arr[i];//2 4 1 6 4 6 7

	 }
	 int key;
	 cin>>key;

	 int i;
	 for(i=0;i<=n-1;i++){
	 	if(arr[i]==key){
	 		cout<<key<<" is present at index "<<i<<endl;
	 		break;

	 	}
	 }
	 if(i==n){
	 	cout<<"Key is not present"<<endl;
	 }



	

	return 0;
}