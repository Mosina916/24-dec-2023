#include<iostream>
using namespace std;
int main(){
	// int arr[1000000];

	 int arr[100];
	 int n;
	 cin>>n;//7
	 for (int i = 0; i <=n-1; ++i)
	 {
	 	cin>>arr[i];//4 1 6 14 6 7 

	 }
	

	 // counting sort
	 int freq[11]={0};

	 for (int i = 0; i <=n-1; i++)
	 {
	 	freq[arr[i]]++;
	 }


	

	// print
	for (int no = 0; no<=10; no++)
	{
		for (int c = 1; c <=freq[no] ; c++)
		{
			cout<<no<<" ";//0 
		}
	}

	cout<<endl;

	

	return 0;
}