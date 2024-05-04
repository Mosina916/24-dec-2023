#include "test.h"
int main(){
	stack<char> s;
	
	s.push('A');
	s.push('H');
	s.push('S');
	s.push('D');
	

	// stack print 

	while(!s.empty()){
		cout<<s.top()<<" ";//65

	s.pop();

	}


	return 0;
}