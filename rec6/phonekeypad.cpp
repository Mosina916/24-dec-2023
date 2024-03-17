#include<iostream>
#include<cmath>
using namespace std;
char keypad[20][20]={"","","ABC","DEF","GHI","JKL","MNO","PQRS","TUV","WXYZ"};
void phonekeypad(char inpu[100],int i,char op[100],int k){
	if(inpu[i]=='\0'){
		op[k]='\0';
		cout<<op<<endl;
		return ;
	}

	int indx=inpu[i]-'0';//2
	for(int j=0;keypad[indx][j]!='\0';j++){
		op[k]=keypad[indx][j];
	phonekeypad(inpu,i+1,op,k+1);
	}
	

}

int main(){
	char inpu[100];
	cin.getline(inpu,100);//"23";
	char op[100];	
	phonekeypad(inpu,0,op,0);




	

	return 0;
}