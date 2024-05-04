#include<iostream>
#include<cstring>
#include<vector>
using namespace std;



vector<string> v;

void permuattion(char *in,int i){
	// base case
	if(in[i]=='\0'){
		// cout<<in<<endl;
		v.push_back(in);
		return;
	}


	// recursive case
	for(int j=i;in[j]!='\0';j++){
		swap(in[i],in[j]);
	permuattion(in,i+1);
	swap(in[i],in[j]);//bracktracking
	}

}
int main(){
	char inp[100];
	cin>>inp;//abc
	permuattion(inp,0);

	sort(v.begin(),v.end());
	for (int i = 0; i <v.size(); ++i)
	{
		if(v[i]>inp){
			cout<<v[i]<<endl;
		}
	}


	


	



	return 0;
}