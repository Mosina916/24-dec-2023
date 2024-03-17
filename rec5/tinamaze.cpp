#include<iostream>
using namespace std;
int sol[100][100]={0};

bool ratinamaze(char maze[4][5],int r,int c,int i,int j){
	// ?base case 
	if(i==r-1 and j==c-1){
		sol[i][j]=1;
		for(int l=0;l<r;l++){
			for(int k=0;k<c;k++){
				cout<<sol[l][k]<<" ";
			}

			cout<<endl;

		}
		// return true;
		return false;


	// rec case
	sol[i][j]=1;
	 if(j<=c-2 and maze[i][j+1]!='B'){
	 // 2 if( maze[i][j+1]!='B' and j<=c-2){
		if(ratinamaze(maze,r,c,i,j+1)==true){
			return true;
		}

	}

	if(i<=r-2 and maze[i+1][j]!='B'){
		if(ratinamaze(maze,r,c,i+1,j)==true){
			return true;
		}
	}
	sol[i][j]=0;
	return false;
}

int main(){

	char maze[4][5]={"UUUB",
					 "UUBU",
					 "BUBB",
					 "BUUU"};
	int r=4,c=4;

	ratinamaze(maze,r,c,0,0);
	



	return 0;
}