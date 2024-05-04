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


bool searchinll(node*head,int key){

	while(head!=NULL){
		if(head->data==key){
			return true;
		}
		head=head->next;
	}

	return false;
}


// rec 
bool searchinllrec(node*head,int key){
	if(head==NULL){
		return false;
	}
	
		if(head->data==key){
			return true;
		}
		return searchinllrec(head->next,key); 
	

	
}

// int midpointofll(node*head){


// 	node*slow=head;
// 	node*fast=head;

// 	while(fast->next!=NULL){
// 		slow=slow->next;
// 	fast=fast->next->next;

// 	}

// 	return slow->data;
	

// }

// node* midpointofll(node*head){


// 	node*slow=head;
// 	node*fast=head;

// 	while(fast!=NULL and fast->next!=NULL){
// 		slow=slow->next;
// 	fast=fast->next->next;//null

// 	}

// 	return slow;
	

// }

node* midpointofll(node*head){


	node*slow=head;
	node*fast=head->next;

	while(fast!=NULL and fast->next!=NULL){
		slow=slow->next;
	fast=fast->next->next;//null

	}

	return slow;
	

}

void bubblesort(node*head){
	for(int i=0;i<lenrec(head)-1;i++){
		for(node*temp=head;temp->next!=NULL;temp=temp->next){ //optimization
			if(temp->data>temp->next->data){
				swap(temp->data,temp->next->data);

				
			}
		}
	}
}

void printll(node*head){
	while(head!=NULL){
		cout<<head->data<<" --> ";
	head=head->next;
	}



	
}


node* nthnodefromend(node*head,int n){
	node*a=head;
	node*b=head;
	for (int jump = 1; jump <=n-1;jump++)
	{
		b=b->next;
	}

	while(b->next!=NULL){
		a=a->next;
		b=b->next;

	}

	return a;

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


int main(){
	node*head=NULL;
	node*tail=NULL;

	// insertatfront(3,head,tail);
	// insertatfront(4,head,tail);
	// insertatfront(9,head,tail);
	// insertatfront(10,head,tail);
	// //10 9 4 3


	// // printll(head);

	
	insertattail(40,head,tail);  

	insertattail(50,head,tail);
	insertattail(60,head,tail);

	insertattail(10,head,tail);  

	insertattail(20,head,tail);
	insertattail(30,head,tail);

	int n;
	cin>>n;
	// n<=lenll
	node* k=nthnodefromend(head,n);
	cout<<k->data<<endl;

	// node*h=reverseall(head);

	// printll(h);

	// bubblesort(head);
	// printll(head);
	// insertattail(70,head,tail);

	// 10 20 30 40 50 60
	// int key;
	// cin>>key;
	// if(searchinll(head,key)==true){
	// 	cout<<"key is present"<<endl;
	// }
	// else{
	// 	cout<<"key is not present"<<endl;

	// }

	// node*h=midpointofll(head);

	// cout<<h->data<<endl;
	// 10   9   4   3   10   20   30
	
	// deleteathead(head);

	// //   9   4   3   10   20   30
	// deleteathead(head);

	// insertatanyposinbtw(50,head,tail,3);

	// 4   3   10   20   30
	// printll(head);

	// deleteattail(head,tail);
	// // 4   3   10   20  
	// deleteattail(head,tail);
	 // 4   3   10 

	  // printll(head);


	// cout<<lenll(head)<<endl;
	// cout<<lenrec(head)<<endl;




	return 0;
}