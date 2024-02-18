#include <iostream>
using namespace std;
int main(){
	int arr[100][100];
	int tr,tc;
	cin>>tr>>tc;//4 5
	for(int i=0;i<tr;i++){
		for(int j=0;j<tc;j++){
		cin>>arr[i][j];

	}

	}

	for(int i=0;i<tr;i++){
		for(int j=0;j<tc;j++){
		cout<<arr[i][j]<<" ";

	}

	cout<<endl;

	}


	return 0;
}