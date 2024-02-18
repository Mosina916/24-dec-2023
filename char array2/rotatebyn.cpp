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
void rotatebynchar(char arr[100],int n){
	int x=len(arr);
	int m=len(arr);
	int i=len(arr);

	// shifting
	while(i>=0){
		arr[i+n]=arr[i];
		i--;
	}

	int j=m;
	int k=0;

	// swap
	for (int times = 1; times<=n;times++)
	{
		swap(arr[j],arr[k]);
		j++;
		k++;
		
	}
	arr[x]='\0';

}
int main(){

	char arr[100];
	cin.getline(arr,100);//"codingblocks"
	int n;
	cin>>n;//13
	n=n%len(arr);
	rotatebynchar(arr,n);

	cout<<arr<<endl;

	


	return 0;
}