#include<iostream>
#include <unordered_map>
using namespace std;

class node{
public:
	char ch;
	bool isterminal;
	unordered_map<char,node*> h;
	node(char c){
		ch=c;
		isterminal=false;
	}

};

class trie{
	node*root;
public:
	trie(){
		root=new node('\0');
	}

	// insert

	void insert(string s){//coders
		node*temp=root;

		for(int i=0;s[i]!='\0';i++){
			char ch=s[i];//r

			if(temp->h.count(ch)){
				temp=temp->h[ch];
			}
			else{
				temp->h[ch]=new node(ch);
			temp=temp->h[ch];

			}
		}
		temp->isterminal=true;

	}



	// ?search

	bool search(string s){//coder
		node*temp=root;
		for(int i=0;s[i]!='\0';i++){
			char ch=s[i];//r
		if(temp->h.count(ch)){
			temp=temp->h[ch];
		}
		else{
			return false;
		}

		}

		return temp->isterminal;
		

	}


};



int main(){

	trie t;
	t.insert("code");
	t.insert("coders");

	if(t.search("coder")==true){
		cout<<"key is present"<<endl;
	}
	else{
		cout<<"key is not present"<<endl;


	}

	
	
	

	
	return 0;
}