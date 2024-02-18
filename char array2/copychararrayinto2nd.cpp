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
void copy(char arr[100],char b[100]){
	int i=0;
	int j=0;
	while(i<=len(arr)){
		b[j]=arr[i];
	i++;
	j++;

	}

	cout<<b<<endl;
	


}
int main(){
	// arr-->"app"
	// b

	char arr[100];
	cin.getline(arr,100);//app

	char b[100];
	copy(arr,b);

	cout<<arr<<endl;
	cout<<b<<endl;





	return 0;
}