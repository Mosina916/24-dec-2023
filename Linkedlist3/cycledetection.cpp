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

int  lenrec(node*head){
	// base case
	if(head==NULL){
		return 0;

	}
	// rec  case

	return 1+lenrec(head->next);
}


node* midpointofll(node*head){


	node*slow=head;
	node*fast=head->next;

	while(fast!=NULL and fast->next!=NULL){
		slow=slow->next;
	fast=fast->next->next;//null

	}

	return slow;
	

}

void printll(node*head){
	while(head!=NULL){
		cout<<head->data<<" --> ";
	head=head->next;
	}

	
}


// check cycle 

bool cyclecheck(node*head){


	node*p1=head;
	node*p2=head;
	while(p2!=NULL and p2->next!=NULL){
		p1=p1->next;
	p2=p2->next->next;
	if(p1==p2){
		return true;
	}

	}

	return false;
	

}

void createcycle(node*head,int pos){
	node*temp=head;
	while(temp->next!=NULL){
		temp=temp->next;

	}
	node*x=head;

	for (int ju = 1; ju<=pos-1;ju++)
	{
		x=x->next;
	}

	temp->next=x;
	
}

void breakcycle(node*head){
	bool kyacyclehai=false;
	// check cycle hai or not
	node*p1=head;
	node*p2=head;
	while(p2!=NULL and p2->next!=NULL){
		p1=p1->next;
	p2=p2->next->next;
	if(p1==p2){
		kyacyclehai=true;
		break;
		
	}

	}

	// agar cycle hai tou then break int
	// if will break the cycle
	if(kyacyclehai==true){
		// tou break it
		p1=head;
		while(p1->next!=p2->next){
			p1=p1->next;
		p2=p2->next;

		}
		p2->next=NULL;
		

	}
}


int main(){
	node*head=NULL;
	node*tail=NULL;

		int n;cin>>n;//4
	for (int i = 0; i <n; ++i)
	{
			int d;
			cin>>d;

		insertattail(d,head,tail);
	}

	int pos;
	cin>>pos;
	createcycle(head,pos);

	// printll(head);
	breakcycle(head);


	printll(head);

	// 1 2 3 4 5 6 7 8-->NULL 

	// if(cyclecheck(head)==true){
	// 	cout<<"cycle is present"<<endl;
	// }
	// else{
	// 	cout<<"cycle is not present"<<endl;

	// }



	



	return 0;
}