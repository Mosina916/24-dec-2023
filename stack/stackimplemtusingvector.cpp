#include<iostream>
#include<vector>
using namespace std;
class stack{
	vector<int> v;

public:
	

	// push
	void push(int d){
		v.push_back(d);

	}

	// pop
	void pop(){
		v.pop_back();
	}


	// size

	int size(){
		return v.size();
	}

	// top

	int top(){
		return v[v.size()-1];
	}


	// empty
	bool empty(){

	// 	if(v.size())==0){
	// return true;
	// }
	// else{

	// 	return false;
	// }

		return v.size()==0;


	

	}

};
int main(){
	stack s;
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