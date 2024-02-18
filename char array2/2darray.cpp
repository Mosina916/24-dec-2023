#include <iostream>
using namespace std;

int main(){
	// int arr[2][3]={
	// 	{1,2,3},
	// 	{4,5,6}
	// };
	// cout<<arr[0][0]<<" ";
	// cout<<arr[0][1]<<" ";
	// cout<<arr[0][2]<<endl;

	// for(int i=0;i<=1;i++){
	// 	for(int j=0;j<=2;j++){
	// 	cout<<arr[i][j]<<" ";
	// }
	// cout<<endl; 
	// }

	

	// for(int i=0;i<=2;i++){
	// 	cout<<arr[1][i]<<" ";

	// }

	// cout<<endl;
	

	// cout<<arr[1][0]<<" ";
	// cout<<arr[1][1]<<" ";
	// cout<<arr[1][2]<<endl;

	int arr[4][3]={
		{1,2,3},
		{4,5,6},
		{6,5,2},
		{6,8,4}
	};


	// cout<<arr<<endl;

	cout<<&arr[0][0]<<endl;
	cout<<&arr[1][0]<<endl;

	cout<<&arr[2][0];
	



	


	return 0;
}