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

bool ispalindrome(char arr[100]){
	int i=0;
	int j=len(arr)-1;

	while(i<j){
		if(arr[i]==arr[j]){
			i++;
			j--;
		}
		else{
			return false;
		}
	}

	return true;

}
int main(){
	char arr[100];
	cin.getline(arr,100);//nitin
	if(ispalindrome(arr)){
		cout<<"yes palindrome"<<endl;

	}
	else{
		cout<<"not palindrome"<<endl;

	}



	

	return 0;
}