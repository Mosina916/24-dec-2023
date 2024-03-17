#include<iostream>
using namespace std;

void permutation(char *inpu,int i){
	 // base case
	if(inpu[i]=='\0'){
		cout<<inpu<<endl;
		return;
	}

	// rec case
	for(int j=i; inpu[j]!='\0';j++){
		swap(inpu[i],inpu[j]);
	permutation(inpu,i+1);
	swap(inpu[i],inpu[j]);//bactracking 

	}

}

int main(){
	char inpu[100];
	cin.getline(inpu,100);//"abc"

	permutation(inpu,0);



	return 0;
}