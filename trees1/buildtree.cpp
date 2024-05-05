#include<iostream>
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

node* buildtree(){
	int d;
	cin>>d;
	if(d==-1){
		return NULL;
	}
	node*root=new node(d);
	root->left=buildtree();//lst
	root->right=buildtree();//rst

	return root;

}
// i/p:8 10 1 -1 -1 6 4 -1 -1 7 -1 -1 3 -1 14 13 -1 -1 -1
void preorder(node*root){
	if(root==NULL){
		return;
	}
	cout<<root->data<<" ";
	preorder(root->left);
	preorder(root->right);

}

void inorder(node*root){
	if(root==NULL){
		return;
	}


	inorder(root->left);
	cout<<root->data<<" ";
	inorder(root->right);


}
void postorder(node*root){
	if(root==NULL){
		return;
	}
	postorder(root->left);
	postorder(root->right);
	cout<<root->data<<" ";
}

int heightoftree(node*root){
	if(root==NULL){
		return 0;
	}


	return max(heightoftree(root->left),heightoftree(root->right))+1;

}

int sumofnodes(node*root){
	if(root==NULL){

		return 0;
	}
	return sumofnodes(root->left)+sumofnodes(root->right)+root->data;
}

int countofnodes(node*root){
	if(root==NULL){

		return 0;
	}
	return countofnodes(root->left)+countofnodes(root->right)+1;
}


int diameter(node*root){
	if(root==NULL){
		return 0;
	}

	int op1=diameter(root->left);//3
	int op2=diameter(root->right);//2
	int op3=heightoftree(root->left)+heightoftree(root->right);
	return max(op1,max(op2,op3));
}

void mirroroftree(node*root){
	if(root==NULL){
		return;
	}

	swap(root->left,root->right);
	mirroroftree(root->left);
	mirroroftree(root->right);

}




int main(){
	node*root=buildtree();
	cout<<diameter(root)<<endl;

	// cout<<countofnodes(root)<<endl;
	// cout<<sumofnodes(root)<<endl;

	// cout<<countofnodes(root)<<endl;
	// cout<<"height of tree is "<<heightoftree(root)<<endl;
	// preorder(root);
	// cout<<endl;

	// inorder(root);
	// cout<<endl;
	// 	postorder(root);
	// cout<<endl;

	return 0;
}