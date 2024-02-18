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

	
	


}
int main(){
	// 4
	// "apple"
	// "boy"
	// "elephant"
	// "marker"

	int n;
	cin>>n;//4
	cin.ignore();

	char arr[100];
	cin.getline(arr,100);//"Apple"
	char largeststr[100];
	copy(arr,largeststr);//?elephant

	int largestlen=len(arr);//5

for(int i=1;i<=n-1;i++){
	cin.getline(arr,100);//
	if(len(arr)>largestlen){
		copy(arr,largeststr);
		largestlen=len(arr);//8


	}

}

cout<<largeststr<<endl;
cout<<largestlen<<endl;
	









	return 0;
}