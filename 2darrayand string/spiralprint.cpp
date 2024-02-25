#include<iostream>
using namespace std;
void spiralprint(int arr[7][3],int r,int c){

	int sr=0,er=r-1;
	int sc=0,ec=c-1;

	while(sc<=ec and sr<=er){
		for(int j=sc;j<=ec;j++){
			cout<<arr[sr][j]<<" ";
		}
		sr++;
		for(int i=sr;i<=er;i++){
			cout<<arr[i][ec]<<" ";
		}
		ec--;
		if(sr<=er){
			for(int k=ec;k>=sc;k--){
			cout<<arr[er][k]<<" ";
		}
		er--;

		}
		
		if(sc<=ec){
			for(int l=er;l>=sr;l--){
			cout<<arr[l][sc]<<" ";
		}
		sc++;

		}
		

	}


}

int main(){
	
	// 	int arr[4][5]={
	// 	{1,2,4,4,3},
	// 	{3,7,8,53,2},
	// 	{5,9,15,5,2},
	// 	{13,16,16,8,4}
	// };

		int arr[7][3]={
		{1,2,4},
		{3,7,8},
		{5,9,15},
		{13,16,16},
		{4,7,2},
		{8,13,90},
		{55,54,45}
	};
	// int r=4;//index 0 to 3
	// int c=5;////index 0 to 4

	int r=7;//index 0 to 3
	int c=3;////index 0 to 4



	spiralprint(arr,r,c);

	cout<<endl;


	return 0;
}