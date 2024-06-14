#include<iostream>
#include<queue>
using namespace std;
class node{ 

public:
	int data;
	node*left;
	node*right;
	node(int d){

		data=d;
		left=NULL;
		right=NULL;
	}
};


// i/p:8 10 1 -1 -1 6 4 -1 -1 7 -1 -1 3 -1 14 13 -1 -1 -1


void printlevelwise(node*root){
	queue<node*> q;
	q.push(root);
	q.push(NULL);

	while(!q.empty()){
		node*x=q.front();//8 ka address 300
	q.pop();
	if(x==NULL){
		cout<<endl;
		if(!q.empty()){
			q.push(NULL);
		}

	}
	else{
		cout<<x->data<<" ";
		if(x->left!=NULL){
			q.push(x->left);
		}
		if(x->right!=NULL){
			q.push(x->right);
		}


	}


	}
	

}




node* insertinbst(node*root,int d){
	if(root==NULL){
		root=new node(d);
		return root;
	}
	else if(d<=root->data){
		root->left=insertinbst(root->left,d);
		return root;
		}	
	else{
		root->right=insertinbst(root->right,d);
		return root;
		}
}


node* buildbst(){
	int d;
	cin>>d;
	node*root=NULL;
	while(d!=-1){
		root=insertinbst(root,d);
		cin>>d;

	}

	return root;
}

class p{
public:
	node*h;
	node*t;
	p(){
		h=NULL;
		t=NULL;

	}

};

p bsttosortedll(node*root){
	p A;
	if(root==NULL){
		return A;
	}


	// rec case

	// case 1 lst and rst donu empty 
	if(root->left==NULL and root->right==NULL){
		A.h=root;
		A.t=root;
		// return A;
	}

	// case 2 !lst and rst empty
	else if(root->left!=NULL and root->right==NULL){ 
		p x=bsttosortedll(root->left);
		x.t->right=root;
		A.h=x.h;
		A.t=root;
		// return A;
	}
	// case 3 lst and !rst  empty 
	else if(root->left==NULL and root->right!=NULL){ 
		p y=bsttosortedll(root->right);
		root->right=y.h;
		A.h=root;
		A.t=y.t;
		// return A;

	}

	// case  !lst and !rst  empty 
	else{
		p x=bsttosortedll(root->left);
		p y=bsttosortedll(root->right);
		x.t->right=root;
		root->right=y.h;
		A.h=x.h;
		A.t=y.t;
		// return A;
	}


	return A;

}


void rightview(node*root,int cl,int &mlttn){
	if(root==NULL){
		return;
	}

	// rec 
	if(cl>mlttn){
		cout<<root->data<<" ";
		mlttn++;
	}
	rightview(root->right,cl+1,mlttn);
	rightview(root->left,cl+1,mlttn);
}




void leftview(node*root,int cl,int &mlttn){
	if(root==NULL){
		return;
	}

	// rec 
	if(cl>mlttn){
		cout<<root->data<<" ";
		mlttn++;
	}
	leftview(root->left,cl+1,mlttn);
	leftview(root->right,cl+1,mlttn);
	
}
void printll(node*head){


	while(head!=NULL){
			cout<<head->data<<"-->";
	head=head->right;

	}

	cout<<endl;


}

node* deleteintree(node*root,int key){
	


	if(key<root->data){
		root->left=deleteintree(root->left,key);

		return root;

	}
	else if(key>root->data){
		root->right=deleteintree(root->right,key);

		return root;
		
	}
	else{

		// !lst !rst
		if(root->left==NULL and root->right==NULL){
			delete root;
			root=NULL;
			return root;
		}

		// lst !rst
		else if(root->left!=NULL and root->right==NULL){
			node*temp=root->left;
			delete root;
			// root=NULL;
			return temp;
		}

		// !lst rst
		else if(root->left==NULL and root->right!=NULL){
			node*temp=root->right;
			delete root;
			// root=NULL;
			return temp;
		}

		// lst rst
		else{
			// // left k max se replace 
			// node*temp=root->left;

			// while(temp->right!=NULL){
			// 	temp=temp->right;
			// }
			// // temp will be at max

			// swap(temp->data,root->data);
			// root->left=deleteintree(root->left,key);
			// return root;

			// left k max se replace 
			node*temp=root->right;

			while(temp->left!=NULL){
				temp=temp->left;
			}
			// temp will be at max

			swap(temp->data,root->data);
			root->right=deleteintree(root->right,key);
			return root;
			
		}


	}
}

int main(){
	node* root=buildbst();
	int key;
	cin>>key;
	printlevelwise(root);

	node* h=deleteintree(root,key);
	printlevelwise(h);
	// int l=0;
	// // rightview(root,1,l);
	// leftview(root,1,l);
	// p s=bsttosortedll(root);
	// printll(s.h);

	
	return 0;
}