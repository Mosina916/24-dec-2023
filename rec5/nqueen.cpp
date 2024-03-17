#include<iostream>
using namespace std;
int sol[100][100]={0};
int c=0;//for counting solutions
bool kyaqueenrakhsaktehai(int i,int j,int n){
	// vertical 

	for(int q=i-1;q>=0;q--){
		if(sol[q][j]==1){
			return false;
		}
	}

	// right diagnoal
	int u=i-1;
	int v=j+1;
	while(u>=0 and v<=n-1){
			if(sol[u][v]==1){
		return false;
	}
	u--;
	v++;

	}

		int r=i-1;//2
	int p=j-1;//0
	// left dia
	while(r>=0 and p>=0){

	if(sol[r][p]==1){
		return false;
	}
	r--;
	p--;

	}


	return true;
	




}
bool nqueen(int n,int i){
	// base case
	if(i==n){

		for (int l = 0; l <n; l++)
		{
			for(int k=0;k<n;k++){
				cout<<sol[l][k]<<" ";

			}
			cout<<endl;
		}
		c++;////for counting solutions

		cout<<endl;

		// return true;//single sol
		return false;//multiple sol

	}


	// rec case
	for(int j=0;j<=n-1;j++){
		if(kyaqueenrakhsaktehai(i,j,n)==true){
		sol[i][j]=1;
		if(nqueen(n,i+1)==true){
			return true;

		}
		sol[i][j]=0;
	}

	}
	return false;
	


}
int main(){

	int n;
	cin>>n;//4

	nqueen(n,0);//4 

	cout<<"total sol are "<<c<<endl;


	// n*n;//square matrix -->n queens


	return 0;
}