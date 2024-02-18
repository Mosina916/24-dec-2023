#include<iostream>
using namespace std;

int main(){
	char arr[100];
	// cin>>arr;
	// cin.getline(arrname,size,delimiter);

	cin.getline(arr,100,'$');
	char ch;
	ch=cin.get();

	int i=0;

	while(ch!='$'){
		arr[i]=ch;
	i++;
	// cin>>ch;
	ch=cin.get();

	}

	// arr[i]='\0';
	cout<<arr<<endl;


	return 0;
}