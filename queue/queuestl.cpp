#include<iostream>
#include<queue>
using namespace std;


int main(){

	queue<int> s;



	s.push(3);
	s.push(5);
	s.push(2);
	s.push(9);
	s.push(10);

	s.pop();
	s.pop();
	s.pop();

	s.push(60);
	s.push(80);

	cout<<s.size()<<endl;


	while(!s.empty()){
		cout<<s.front()<<" ";//3 5 2 9 10
	s.pop();


	}



	



	return 0;
}