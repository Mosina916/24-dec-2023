#include<iostream>
using namespace std;
bool staircasesearch(int arr[4][3],int key,int r,int c){
	int i=0;
	int j=c-1;

	while(i<=r-1 and j>=0){
		if(arr[i][j]==key){
			cout<<key<< " is present at index "<<i<<" "<<j<<endl;
			return true;
		}
		else if(arr[i][j]<key){
			i++;
		}
		else{
			j--;
		}
	}

	return false;
}

int main(){
	
		int arr[4][3]={
		{1,2,4},
		{3,7,8},
		{5,9,15},
		{13,16,16}
	};
	int r=4;//index 0 to 3
	int c=3;////index 0 to 2

	int key;
	cin>>key;

	if(staircasesearch(arr,key,r,c)==false){
		cout<<"key is not present"<<endl;
	}
	


	return 0;
}