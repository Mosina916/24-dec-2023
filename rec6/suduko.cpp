#include<iostream>
#include<cmath>
using namespace std;
bool kyarakhsaktehainum(int i,int j,int mat[9][9],int num,int n){
	// vertical 
	for(int l=0;l<=n-1;l++){
		if(mat[l][j]==num){
			return false;
		}

	}



	// horizontal

	for(int l=0;l<=n-1;l++){
		if(mat[i][l]==num){
			return false;
		}

	}

	// root(n)*root(n);
	int x=sqrt(n);//3

	int si=(i/x)*x;
	int sj=(j/x)*x;

	for(int u=si;u<si+x;u++){
		for(int v=sj;v<sj+x;v++){
		if(mat[u][v]==num){
		return false;
	}

	}

	}

	return true;
	
	
	


}
bool f(int mat[9][9],int i,int j,int n){
	// base case
	if(i==n){
		for(int l=0;l<n;l++){
			for(int m=0;m<n;m++){
				cout<<mat[l][m]<<" ";
			}
			cout<<endl;
		}

		return false;

		// return true;

	}


	// rec case
	if(j==n){
		return f(mat,i+1,0,n);
	}

	// filled 
	if(mat[i][j]!=0){
		return f(mat,i,j+1,n);

	}
	// unfilled
	else{

		for(int num=1;num<=9;num++){
			if(kyarakhsaktehainum(i,j,mat,num,n)){
				mat[i][j]=num;
				if(f(mat,i,j+1,n)){
					return true;
				}
				mat[i][j]=0;
			}
		}

		return false;

	}


	


}
int main(){
	int mat[9][9] =
{{5,3,0,0,7,0,0,0,0},
{6,0,0,1,9,5,0,0,0},
{0,9,8,0,0,0,0,6,0},
{8,0,0,0,6,0,0,0,3},
{4,0,0,8,0,3,0,0,1},
{7,0,0,0,2,0,0,0,6},
{0,6,0,0,0,0,2,8,0},
{0,0,0,4,1,9,0,0,5},
{0,0,0,0,8,0,0,7,9}};

f(mat,0,0,9);



	return 0;
}