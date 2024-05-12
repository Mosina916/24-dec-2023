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




node* buildlevelwise(){
	cout<<"Enter data of root"<<endl;
	int d;
	cin>>d;
	
	node*root=new node(d);

	queue<node*> q;
	q.push(root);

	while(!q.empty()){
		node* x=q.front();
		q.pop();
		cout<<"Enter lc and rc  of "<<x->data<<endl;
		int lc,rc;
		cin>>lc>>rc;
		if(lc!=-1){
			x->left=new node(lc);
			q.push(x->left);
		}
		if(rc!=-1){
			x->right=new node(rc);
			q.push(x->right);
		}
	}
	return root;
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

bool searchinbst(node*root,int key){
	if(root==NULL){
		return false;
	}

	// rec case
	if(root->data==key){
		return true;
	}
	else if(key<root->data){
		return searchinbst(root->left,key);

	}
	else{
		return searchinbst(root->right,key);

	}
}

// void printinrangek1k2(node*root,int k1,int k2){
// 	if(root==NULL){
// 		return;
// 	}

// 	// rec case
// 	printinrangek1k2(root->left,k1,k2);//4 6 7
// 	if(root->data>=k1 and root->data<=k2){
// 		cout<<root->data<<" ";
// 	}
// 	printinrangek1k2(root->right,k1,k2);
// }


void printinrangek1k2d(node*root,int k1,int k2){
	if(root==NULL){
		return;
	}

	// rec case
	printinrangek1k2d(root->right,k1,k2);
	
	if(root->data>=k1 and root->data<=k2){
		cout<<root->data<<" ";
	}
	printinrangek1k2d(root->left,k1,k2);//4 6 7
	
}

bool checkifbst(node*root,int mi=INT_MIN,int ma=INT_MAX){
	if(root== NULL){
		return true;
	}

	if(root->data>=mi and root->data<=ma and checkifbst(root->left,mi,root->data) and checkifbst(root->right,root->data+1,ma)){
		return true;
	}
	return false;

}

int arr[]={1,2,3,4,5,6,7,8,9};
node* buildbstfromsarr(int s,int e){
	if(s>e){
		return NULL;
	}


	int mid=((s+e)/2);
	node*root=new node(arr[mid]);
	root->left=buildbstfromsarr(s,mid-1);
	root->right=buildbstfromsarr(mid+1,e);
	return root;




}

class p{
public:
	int h;
	bool isb;

};
p isbalon(node*root){
	p x;
	// base case
	if(root==NULL){
		x.isb=true;
		x.h=0;
		return x;
	}


	// rec case
	p l=isbalon(root->left);
	p r=isbalon(root->right);

	x.h=max(l.h,r.h)+1;
	if(l.isb ==true and r.isb==true and (abs(l.h-r.h)<=1)){
		x.isb=true;
	}
	else{
		x.isb=false;
	}
	return x;
}

int main(){
	node* root=buildbst();
	// int n=sizeof(arr)/sizeof(int);
	// node*root=buildbstfromsarr(0,n-1);
	p a=isbalon(root);
	cout<<a.isb<<endl;
	cout<<a.h<<endl;
	

	// // node* root=buildlevelwise();
	// printlevelwise(root);
	// cout<<checkifbst(root)<<endl;
	// int k1,k2;
	// cin>>k1>>k2;
	// // printinrangek1k2(root,k1,k2);
	// printinrangek1k2d(root,k1,k2);
	// int key;
	// cin>>key;
	// cout<<searchinbst(root,key)<<endl;
	return 0;
}