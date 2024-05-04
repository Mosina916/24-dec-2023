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


node* mergetwosortedll(node*head1,node*head2){
	if(head1==NULL){
		return head2;
	}
	if(head2==NULL){
		return head1;
	}

	if(head1->data<head2->data){
		node*newhead=head1;
		newhead->next=mergetwosortedll(head1->next,head2);
		return newhead;
	}
	else{
		node*newhead=head2;
		newhead->next=mergetwosortedll(head1,head2->next);
		return newhead;

	}
}

node* mergesort(node*head){


	if(head==NULL||head->next==NULL){
		return head;
	}



	node*m=midpointofll(head);
	node*x=m->next;
	m->next=NULL;
	node*p=mergesort(head);//3-->4-->5
	node*l=mergesort(x);//1 2

	return mergetwosortedll(p,l);//200
}
node* reverseall(node*head){
	node* curr=head;
	node* prev=NULL;
	while(curr!=NULL){
			node*aagekanode=curr->next;
	curr->next=prev;
	prev=curr;
	curr=aagekanode;

	}
	return prev;

}


node* kreverse(node*head,int k){
	if(head==NULL){
		return head;
	}

	node*temp=head;
	for (int jump = 1; jump<=k-1;jump++)
	{
		temp=temp->next;
	}
	node*p=temp->next;
	temp->next=NULL;
	node*x=reverseall(head);
	node*y=kreverse(p,k);
	node*j=x;
	for (int jump = 1; jump<=k-1;jump++)
	{
		j=j->next;
	}
	j->next=y;
	return x;

}


int main(){
	node*head=NULL;
	node*tail=NULL;

	// node*head2=NULL;
	// node*tail2=NULL;
		int n;cin>>n;//4
	for (int i = 0; i <n; ++i)
	{
			int d;
			cin>>d;

		insertattail(d,head,tail);
	}

	int k;
	cin>>k;

	node*nh=kreverse(head,k);

	printll(nh);

	// node*nh=mergesort(head);
	// printll(nh);

	// int n;cin>>n;//4
	// for (int i = 0; i <n; ++i)
	// {
	// 		int d;
	// 		cin>>d;

	// 	insertattail(d,head1,tail1);
	// }

	// 	int m;cin>>m;//6
	// for (int i = 0; i <m; ++i)
	// {
	// 		int d;
	// 		cin>>d;
			
	// 	insertattail(d,head2,tail2);
	// }

	// node*nh=mergetwosortedll(head1,head2);
	// printll(nh);

	

	


	



	return 0;
}