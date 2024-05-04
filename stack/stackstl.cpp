#include<iostream>
#include<stack>
using namespace std;

int main(){
	stack<int> s;
	s.push(5);
	s.push(15);
	s.push(25);
	s.push(45);
	s.push(65);

	// stack print 

	while(!s.empty()){
		cout<<s.top()<<" ";//65

	s.pop();

	}



	

	// s.pop();





	// cout<<s.size()<<endl;
	// cout<<s.top()<<endl;

	// cout<<s.v[1]<<endl;






	return 0;
}