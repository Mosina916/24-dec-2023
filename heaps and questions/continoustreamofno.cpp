#include<iostream>
#include<queue>
using namespace std;
void printheap(priority_queue<int,vector<int>,greater<int> > h){
	while(!h.empty()){
		cout<<h.top()<<endl;
	h.pop();

	}
}
// find 3rd largest
int main(){
	
	priority_queue<int,vector<int>,greater<int> > h;
	int k;
	cin>>k;//3

	int data;
	int c=1;

	
	while(1){
		cin>>data;
		if(c<=k){
		h.push(data);
		c++;
	}
	else{
		if(data==-1){
			printheap(h);

		}
		else if(data>h.top()){
			h.pop();
			h.push(data);

		}
	}


	}
	

	return 0;
}