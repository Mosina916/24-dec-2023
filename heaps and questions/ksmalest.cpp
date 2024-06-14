#include<iostream>
#include<queue>
using namespace std;
// find 3rd largest
int main(){
	
	priority_queue<int> h;
	int k;
	cin>>k;//3

	int data;
	int c=1;

	cin>>data;
	while(data!=-1){
		if(c<=k){
		h.push(data);
		c++;
	}
	else{
		if(h.top()>data){
			h.pop();
			h.push(data);
		}

	}
	cin>>data;

	}

	cout<<h.top()<<endl;
	






	return 0;
}