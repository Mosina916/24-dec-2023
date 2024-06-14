#include<iostream>
using namespace std;
int mincostmatrix(int mat[4][4],int dx,int dy){

	// base case
	if(dx==0 and dy==0){
		return mat[dx][dy];
	}
	if(dx<0 ||dy<0){
		return INT_MAX;

	}

	// rec case


	int op1=mincostmatrix(mat,dx-1,dy);
	int op2=mincostmatrix(mat,dx,dy-1);

	return min(op1,op2)+mat[dx][dy];

}

int mincostmatrixtd(int mat[4][4],int dx,int dy,int arr[100][100]){

	// base case
	if(dx==0 and dy==0){
		return arr[dx][dy]=mat[dx][dy];
	}
	if(dx<0 ||dy<0){
		return INT_MAX;

	}

	// rec case
	if(arr[dx][dy]!=-1){
		return arr[dx][dy];
	}


	int op1=mincostmatrixtd(mat,dx-1,dy,arr);
	int op2=mincostmatrixtd(mat,dx,dy-1,arr);

	return arr[dx][dy]=min(op1,op2)+mat[dx][dy];

}



int main(){

	int mat[4][4]={
		{2,1,3,1},
		{1,4,2,5},
		{5,2,3,7},
		{1,4,3,2}
	};

	// int r=4;
	// int c=4;
	int dx,dy;
	cin>>dx>>dy;//3 3

	cout<<mincostmatrix(mat,dx,dy)<<endl;
	int arr[100][100];

	// ?memset h/w

	// memset(arr,sizeof(arr),-1)

	for (int i = 0; i <100; ++i)
	{
		for(int j=0;j<100;j++){
			arr[i][j]=-1;
		}
	}
	cout<<mincostmatrixtd(mat,dx,dy,arr)<<endl;
	for (int i = 0; i <=dx; ++i)
	{
		for(int j=0;j<=dy;j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<endl;



	return 0;
}