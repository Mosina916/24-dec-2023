#include<iostream>
#include<queue>
using namespace std;
int main(){
	int arr[10000];

	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		for (int i = 0; i <n; ++i)
		{
			cin>>arr[i];

		}

		// linear array maan kar kadene
		int cs=0;
		int ms=INT_MIN;
		int csum=0;
		for (int i = 0; i <n; ++i)
		{
			csum=csum+arr[i];
			cs=cs+arr[i];
			ms=max(ms,cs);
			if(cs<0){
				cs=0;
			}

			arr[i]=-(arr[i]);
		}

		// linear array ka ms -->9
		int op1=ms;//9
		// csum=7

		cs=0;
		ms=INT_MIN;
		for (int i = 0; i <n; ++i)
		{
			
			cs=cs+arr[i];
			ms=max(ms,cs);
			if(cs<0){
				cs=0;
			}

			
		}
		int op2=csum-(-ms);


		cout<<max(op1,op2)<<endl;



	}




	return 0;
}