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

void append(char a[100],char b[100]){
	int i=len(a);
	int j=0;
	while(j<=len(b)){
		a[i]=b[j];
	i++;
	j++;

	}

	cout<<a<<endl;
	cout<<b<<endl;
	
}
int main(){
	char a[100];
	cin.getline(a,100);//hel
	char b[100];
	cin.getline(b,100);//cate

	append(a,b);
	
	

	return 0;
}