#include <iostream>
using namespace std;
class node{
public:
	int data;
	node* next;
	node(int d){
		data=d;
		next=NULL;
	}
};

void insertatfront(int d,node*&head,node*&tail){
	// linked khali
	if(head==NULL){
		node*x=new node(d);
		head=x;
		tail=x;
	}
	else{
		node*x=new node(d);
		x->next=head;
		head=x;

	}
}



void insertattail(int d,node*&head,node*&tail){
	// linked khali
	if(head==NULL){
		node*x=new node(d);
		head=x;
		tail=x;
	}
	else{
		node*x=new node(d);
		tail->next=x;
		tail=x;

	}
}


void printll(node*head){
	while(head!=NULL){
		cout<<head->data<<"-->";
	head=head->next;
	}

	
}

int  lenll(node*head){
	int co=0;
	while(head!=NULL){
		co++;
	head=head->next;
	}

	return co;

	
}

int  lenrec(node*head){
	// base case
	if(head==NULL){
		return 0;

	}



	// rec  case

	return 1+lenrec(head->next);
	
	
}

void deleteathead(node*&head){
	if(head==NULL){
		return;
	}
	// single
	else if(head->next==NULL){
		delete head;
		head=NULL;

	}
	else{
		node*temp=head->next;
		delete head;
		head=temp;
	}
}


void deleteattail(node*&head,node*&tail){

	// ll khali
	if(head==NULL){
		return;
	}
	// single
	else if(head->next==NULL){
		delete head;
		tail=NULL;
		head=NULL;

	}
	else{
		node*temp=head;
		while(temp->next!=tail){
			temp=temp->next;
		}


		delete tail;
		temp->next=NULL;
		tail=temp;
	}
}

void insertatanyposinbtw(int d,node*&head,node*&tail,int pos){
	if(pos==0){
		insertatfront(d,head,tail);
	}
	else if(pos>=lenrec(head)){
		insertattail(d,head,tail);
	}
	else{
		node*x=new node(d);

		node*temp=head;
		for(int jump=1;jump<=pos-1;jump++){
			temp=temp->next;
		}

		x->next=temp->next;
		temp->next=x;
	}
}




int main(){
	node*head=NULL;
	node*tail=NULL;

	insertatfront(3,head,tail);
	insertatfront(4,head,tail);
	insertatfront(9,head,tail);
	insertatfront(10,head,tail);
	//10 9 4 3


	// printll(head);

	insertattail(10,head,tail);  

	insertattail(20,head,tail);
	insertattail(30,head,tail);
	// 10   9   4   3   10   20   30
	
	deleteathead(head);

	//   9   4   3   10   20   30
	deleteathead(head);

	insertatanyposinbtw(50,head,tail,3);

	// 4   3   10   20   30
	printll(head);

	// deleteattail(head,tail);
	// // 4   3   10   20  
	// deleteattail(head,tail);
	 // 4   3   10 

	  // printll(head);


	// cout<<lenll(head)<<endl;
	// cout<<lenrec(head)<<endl;




	return 0;
}