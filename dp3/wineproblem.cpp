#include<iostream>
using namespace std;
int wineproblemrec(int *prices,int i,int j,int day){
	if(i>j){
		return 0;
	}

	// base case
	int op1=prices[i]*day+wineproblemrec(prices,i+1,j,day+1);
	int op2=prices[j]*day+wineproblemrec(prices,i,j-1,day+1);
	return max(op1,op2);



}

int wineproblemrectd(int *prices,int i,int j,int day,int arr[100][100]){
	if(i>j){
		return arr[i][j]=0;
	}

	if(arr[i][j]!=-1){
		return arr[i][j];
	}

	// base case
	int op1=prices[i]*day+wineproblemrectd(prices,i+1,j,day+1,arr);
	int op2=prices[j]*day+wineproblemrectd(prices,i,j-1,day+1,arr);
	return arr[i][j]=max(op1,op2);



}



int wineproblemrecbu(int *prices,int n){//0 4  5
	int arr[100][100]={0};

	// diagonal; fill
	for (int k = 0; k <n;k++)
	{
		arr[k][k]=n*prices[k];
	}

	for(int x=n-2;x>=0;x--){//2

	for(int y=0;y<n;y++){//3
	if(y>x){
		int day=n-(y-x);//3
		int op1=day*prices[x]+arr[x+1][y];//3*3+29 38
		int op2=day*prices[y]+arr[x][y-1];//3*1+37 40
		arr[x][y]=max(op1,op2);

	}
}
}

for(int l=0;l<n;l++){
	for(int m=0;m<n;m++){
		cout<<arr[l][m]<<'\t';
	}
	cout<<endl;
}

return arr[0][n-1];


}


int main(){

	int prices[]={2,3,5,1,4};
	int n=sizeof(prices)/sizeof(int);
	// cout<<wineproblemrec(prices,0,n-1,1)<<endl;

	int arr[100][100];

	for (int i = 0; i <100; ++i)
	{
		for (int j = 0; j <100 ; j++)
		{
			arr[i][j]=-1;
		}
	}

	for (int i = 0; i <n; ++i)
	{
		for(int j=0;j<n;j++){
			cout<<arr[i][j]<<" ";
		}

		cout<<endl;
	}

	


	// cout<<wineproblemrecbu(prices,n)<<endl;
	

	return 0;
}