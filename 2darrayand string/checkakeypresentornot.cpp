#include<iostream>
using namespace std;
bool findkey(int arr[3][3],int key,int r,int c){


	for (int i = 0; i <=r-1; ++i)
	{
		for(int j=0;j<=c-1;j++){
			if(arr[i][j]==key){
				cout<<key<<" is present at index "<<i<<" , "<<j<<endl;
				// break;
				return true;
			}
		}

	}

	return false;
}

int main(){
	// int arr[][3]={
	// 	{3,4,7},
	// 	{5,6,2},
	// 	{13,6,14}
	// };
		int arr[3][3]={
		{3,4,7},
		{5,6,2},
		{13,6,14}
	};
	int r=3;//index 0 to 2
	int c=3;////index 0 to 2

	int key;
	cin>>key;

	if(findkey(arr,key,r,c)==false){
		cout<<"key is not present"<<endl;
	}
	


	return 0;
}