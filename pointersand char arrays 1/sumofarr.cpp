#include<iostream>
using namespace std;
// int b[] same as int *b
void f(int b[],int n){
	for (int i = 0; i <=n-1; ++i)
	{
		b[i]=b[i]+10;
	}
	for (int i = 0; i <=n-1; ++i)
	{
		cout<<b[i]<<" ";////20 22 23
	}

	cout<<endl;

}
int main(){
	int arr[]={10,12,13};
	int n=sizeof(arr)/sizeof(int);

	int sum=0;
	// for (int i = 0; i <=n-1; ++i)
	// {
	// 	sum=sum+arr[i];
	// }
	// for (int i = 0; i <=n-1; ++i)
	// {
	// 	sum=sum+*(arr+i);
	// }


	// cout<<sum<<endl;
	






	return 0;
}