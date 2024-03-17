#include<iostream>
using namespace std;
int c=0;
void subsequence(char *inpu,int i,char *out,int j){
	// base case
	if(inpu[i]=='\0'){
		out[j]='\0';
		c++;
		// cout<<out<<endl;
		return;
	}

	// rec case

	// with a 
	out[j]=inpu[i];
	subsequence(inpu,i+1,out,j+1);
	// without a
	subsequence(inpu,i+1,out,j);

}
int main(){

	char inpu[100];
	cin.getline(inpu,100);//"abc"

	char out[100];
	subsequence(inpu,0,out,0);

	cout<<c<<endl;

	
	


	return 0;
}