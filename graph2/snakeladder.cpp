#include<iostream>
#include<list>

#include<queue>
#include <unordered_map>
using namespace std;

template<typename T>
class graph{
	unordered_map<T,list<T> > h;

public:



		void addedge(T u,T v,bool bird=false){
		h[u].push_back(v);

		if(bird==true){
			h[v].push_back(u);

		}

	}

	void printgraph(){
		for(auto x:h){
			cout<<x.first<<" --> ";
			for(auto p:x.second){
				cout<<p<<" ";

			}

			cout<<endl;


		}
	}


	// 0 2 : 0-->1-->2
	int  snakeandladder(T src,T dest){//breadth first search 0

		unordered_map<T,T> parent;

		parent[src]=src;

		unordered_map<T,int> distance;
		distance[src]=0;

		queue<T> q;
		q.push(src);//
		unordered_map<T,bool> visited;
		visited[src]=true;
		while(!q.empty()){
		T x=q.front();//2
		q.pop();
		// cout<<x<<" ";//4

		for(auto p:h[x]){
			if(!visited[p]){
				q.push(p);
				visited[p]=true;
				distance[p]=distance[x]+1;
				parent[p]=x;
			}
		}
		}

		// cout<<endl;


		// return distance[dest];

	T temp=dest;//2

	while(temp!=src){
		cout<<temp<<"<--";
	temp=parent[temp];//0

	}
	cout<<src<<endl;

	return distance[dest];
	


	}


};

int main(){

	
	graph<int> g;
	int board[50] = {0};
	board[2] = 13;
	board[5] = 2;
	board[9] = 18;
	board[18] = 11;
	board[17] = -13;
	board[20] = -14;
	board[24] = -8;
	board[25] = -10;
	board[32] = -2;
	board[34] = -22;





	for(int src=0;src<=35;src++){
	for(int dice=1;dice<=6;dice++){

	int dest=src+dice+board[src+dice];
	g.addedge(src,dest);

	}
	}

		cout<<g.snakeandladder(0,36)<<endl;


	cout<<"person1 is at 0 "<<endl;
	cout<<"person2 is at 0 "<<endl;
	int srcp1=0;
	int srcp2=0;

	cout<<"start the game"<<endl;

	while(true){
		cout<<"take value of dice for person 1"<<endl;
	int d1;
	cin>>d1;//3
	cout<<"person 1 is at pos "<<srcp1+d1+board[srcp1+d1]<<endl;
	srcp1=srcp1+d1+board[srcp1+d1];//7
	if(srcp1==36){
		cout<<"yeyy person 1 won the game "<<endl;
		break;
	}


	cout<<"take value of dice for person 2"<<endl;
	int d2;
	cin>>d2;//2
	cout<<"person 2 is at pos "<<srcp2+d2+board[srcp2+d2]<<endl;
	srcp2=srcp2+d2+board[srcp2+d2];
	if(srcp2==36){
		cout<<"yeyy person 2 won the game "<<endl;
		break;
	}
	}

	return 0;
}