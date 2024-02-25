#include<iostream>
using namespace std;
void waveprint(int arr[4][5],int r,int c){

	for(int ccol=0;ccol<=c-1;ccol++){
		if(ccol%2==0){
			// even -->dw

			for(int j=0;j<=r-1;j++){
				cout<<arr[j][ccol]<<" ";
			}

		}
		else{
				// odd -->up
			for(int j=r-1;j>=0;j--){
				cout<<arr[j][ccol]<<" ";
			}

		}
	}

	cout<<endl;
	
}

int main(){
	
		int arr[4][5]={
		{1,2,4,4,3},
		{3,7,8,53,2},
		{5,9,15,5,2},
		{13,16,16,8,4}
	};
	int r=4;//index 0 to 3
	int c=5;////index 0 to 4


	waveprint(arr,r,c);


	return 0;
}