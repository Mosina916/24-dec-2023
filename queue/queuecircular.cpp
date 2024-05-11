#include<iostream>
using namespace std;

class Queue{
	int *arr;
	int ts;
	int cs;
	int f;
	int r;

public:

	Queue(int size){//default variable

	arr=new int[size];
	ts=size;
	cs=0;
	f=0;
	r=-1;

	}


	void push(int d){

		if(cs<ts){
			r=(r+1)%ts;
			arr[r]=d;
			cs++;
		}
		else{
			cout<<"overflow"<<endl;
		}

	}

	void pop(){


		if(cs>0){
			f=(f+1)%ts;
			cs--;
		}
		else{
			cout<<"underflow"<<endl;
		}


	}


	int front(){
		return arr[f];

	}


	int size(){

		return cs;

	}


	bool empty(){

		return cs==0;

	}

};
int main(){

	Queue s(5);

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


	while(!s.empty()){
		cout<<s.front()<<" ";//3 5 2 9 10
	s.pop();


	}

	// s.pop();
	



	return 0;
}