#include<iostream>
#include<vector>
using namespace std;

class node{
public:
	int data;
	node*next;
	node(int d){
		data=d;
		next=NULL;
	}
};


class stack{

	node*head;
	int l;
	

public:
	stack(){
		l=0;
		head=NULL;
	}
	

	// push
	// insert at head
	void push(int d){

		node*n=new node(d);
		n->next=head;
		head=n;
		l++;
		

	}

	// pop
	// delete at head
	void pop(){
		node*temp=head;
		head=head->next;
		delete temp;
		temp=NULL;
		l--;

	
	}


	// size

	int size(){

		return l;

		
	}

	// top

	int top(){
		return head->data;
		
	}


	// empty
	bool empty(){
		return l==0;

	

	

	}

};
int main(){
	stack s;
	s.push(5);

	s.pop();
	s.pop();
	// s.push(15);
	// s.push(25);
	// s.push(45);
	// s.push(65);

	// stack print 

	// while(!s.empty()){
	// 	cout<<s.top()<<" ";//65

	// s.pop();

	// }






	return 0;
}