#include<iostream>
#include<stack>
using namespace std;
void insertatbottom(stack<int> &s,int ele){
	if(s.empty()){
		s.push(ele);
		return;
	}
	int t=s.top();
	s.pop();
	insertatbottom(s,ele);
	s.push(t);
}

void reverseatack(stack<int> &s){
	if(s.empty()){
		return;

	}

	int ele=s.top();
	s.pop();
	reverseatack(s);
	insertatbottom(s,ele);
}
int main(){

	stack<int> s;
	s.push(5);
	s.push(15);
	s.push(25);
	s.push(45);
	s.push(65);

	reverseatack(s);
	// stack print 

	while(!s.empty()){
		cout<<s.top()<<" ";//65

	s.pop();

	}




	


	return 0;
}