#include <iostream>
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

bool permutation(char a[100],char b[100]){
	if(len(a)!=len(b)){
		return false;
	}
	else{
		// length 
		int arr[26]={0};
		int k=0;
		while(a[k]!='\0'){
			arr[a[k]-'A']++;
		k++;

		}

		int l=0;
		while(b[l]!='\0'){
			arr[b[l]-'A']--;
		l++;

		}

		for (int i = 0; i <=25; ++i)
		{
			if(arr[i]!=0){
				return false;
			}
		}

		return true;
		


	}
}

int main(){
	char a[100];
	cin.getline(a,100);//abcd
	char b[100];
	cin.getline(b,100);//acbde
	if(permutation(a,b)){
		cout<<"yes permutation"<<endl;

	}
	else{
		cout<<"not permutation"<<endl;
	}


	


	return 0;
}