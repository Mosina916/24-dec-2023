#include<iostream>
using namespace std;
int len(char arr[100]){
	int i=0;
	int coun=0;


	while(arr[i]!='\0'){
			coun++;//1
	i++;

	}

	return coun;




}
int main(){
	char arr[100];
	cin.getline(arr,100);//"code"
	cout<<len(arr)<<endl; 

	

	return 0;
}