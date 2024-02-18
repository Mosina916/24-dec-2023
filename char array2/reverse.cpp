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

void reverse(char arr[100]){
	int i=0;
	int j=len(arr)-1;
	while(i<j){
		swap(arr[i],arr[j]);
	i++;
	j--;

	}

	cout<<arr<<endl;

}
int main(){
	char arr[100];
	cin.getline(arr,100);//hel lo

	reverse(arr);

	cout<<arr<<endl;
	

	return 0;
}