#include <iostream>
using namespace std;
class node{
public:
	int data;
	node* prev;
	node* next;
	node(int d){
		data=d;
		next=NULL;
		prev=NULL;
	}
};


void insertattail(int d,node*&head,node*&tail){
	// linked khali
	if(head==NULL){

		node*x=new node(d);//create node dynmically
		head=x;
		tail=x;
	}
	else{
		node*x=new node(d);
		tail->next=x;
		x->prev=tail;
		tail=x;

	}

}
void printll(node*head){
	while(head!=NULL){
		cout<<head->data<<" --> ";
	head=head->next;
	}



	
}

void reverse(node*tail){

	while(tail!=NULL){
			cout<<tail->data<<" -->";
	tail=tail->prev;


	}

}


int main(){
	node*head=NULL;
	node*tail=NULL;

	insertattail(5,head,tail);
	insertattail(7,head,tail);
	insertattail(9,head,tail);

	printll(head);

	cout<<endl;

	reverse(tail);

 


	return 0;
}