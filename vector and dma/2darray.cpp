#include<iostream>
using namespace std;
int main(){
	int r,c;
	cin>>r>>c;
	// memory allocation
	int **arr=new int*[r];
	for (int i = 0; i <r; ++i)
	{
		arr[i]=new int[c];
	}


	// input
	for (int i = 0; i <r; ++i)
	{
		for(int j=0;j<c;j++){
			cin>>arr[i][j];
		}

	}

	// output
	// input
	for (int i = 0; i <r; ++i)
	{
		for(int j=0;j<c;j++){
			cout<<arr[i][j]<<" ";
		}

		cout<<endl;

	}


	// free
	for (int i = 0; i <r; ++i)
	{
		delete[] arr[i];
		arr[i]=NULL;
	}

	delete[] arr;
	arr=NULL;
	return 0;
}