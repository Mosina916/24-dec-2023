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

int heightoftree(node*root){
	if(root==NULL){
		return 0;
	}


	return max(heightoftree(root->left),heightoftree(root->right))+1;

}

// i/p:8 10 1 -1 -1 6 4 -1 -1 7 -1 -1 3 -1 14 13 -1 -1 -1


void mirroroftree(node*root){
	if(root==NULL){
		return;
	}

	swap(root->left,root->right);
	mirroroftree(root->left);
	mirroroftree(root->right);

}


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


//0(n^2) tc
int diameter(node*root){
	if(root==NULL){
		return 0;
	}

	int op1=diameter(root->left);//3
	int op2=diameter(root->right);//2
	int op3=heightoftree(root->left)+heightoftree(root->right);
	return max(op1,max(op2,op3));
}


class p{
public:
	int h;
	int d;

};
p fd(node*root){
	p x;
	// base case
	if(root==NULL){
		x.h=0;
		x.d=0;
		return x;

	}


	// rec case

	p l=fd(root->left);
	p r=fd(root->right); 
	x.h=max(l.h,r.h)+1;
	int op1=l.d;
	int op2=r.d;
	int op3=l.h+r.h;
	x.d=max(op1,max(op2,op3));

	return x;

}

void preorder(node*root){
	if(root==NULL){
		return;
	}
	cout<<root->data<<",";
	preorder(root->left);
	preorder(root->right);

}

void inorder(node*root){
	if(root==NULL){
		return;
	}


	inorder(root->left);
	cout<<root->data<<",";
	inorder(root->right);


}

int pre[]={8,10,1,6,4,7,3,14,13};
int ino[]={1,10,4,6,7,8,3,13,14};
int i=0;
node * preincreatetree(int s,int e){
	if(s>e){
		return NULL;
	}

	// base case 
	int d=pre[i];//8
	i++;

	// 8 ko ino array mai doondh
	int k;
	for(int j=s;j<=e;j++){
		if(ino[j]==d){
			k=j;
			break;
		}
	}

	// k-->5

	node*root=new node(d);//8 ka node
	root->left=preincreatetree(s,k-1);
	root->right=preincreatetree(k+1,e);
	return root;


	
	

}


int main(){
	// node*root=buildtree();
	// printlevelwise(root);
	int n=sizeof(pre)/sizeof(int);//9



	node*root=preincreatetree(0,n-1);
		printlevelwise(root);



	// preorder(root);
	// cout<<endl;
	// inorder(root);
	// cout<<endl;

	return 0;
}