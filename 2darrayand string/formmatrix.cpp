#include<iostream>
using namespace std;
void formmatrix(char arr[100][100],int r,int c){
	char ch='X';
	int sr=0,er=r-1;
	int sc=0,ec=c-1;

	while(sc<=ec and sr<=er){
		for(int j=sc;j<=ec;j++){
			arr[sr][j]=ch;
		}
		sr++;
		for(int i=sr;i<=er;i++){
			arr[i][ec]=ch;
		}
		ec--;
		if(sr<=er){
			for(int k=ec;k>=sc;k--){
			arr[er][k]=ch;
		}
		er--;

		}
		
		if(sc<=ec){
			for(int l=er;l>=sr;l--){
			arr[l][sc]=ch;
		}
		sc++;

		}

		if(ch=='X'){
			ch='O';
		}
		else{
			ch='X';

		}
		

	}


}

int main(){
	
	char arr[100][100];
	int r,c;
	cin>>r>>c;




	formmatrix(arr,r,c);

	for(int i=0;i<=r-1;i++){
		for(int j=0;j<=c-1;j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}


	return 0;
}