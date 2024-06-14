#include<iostream>
#include<list>

#include<queue>
#include <unordered_map>
using namespace std;

template<typename T>
class graph{
	unordered_map<T,list<T> > h;

public:



		void addedge(T u,T v,bool bird=true){
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

	void dfs(T src,unordered_map<int,bool> &visited){
		cout<<src<<" ";//1 0 4
		visited[src]=true;
		for(auto x:h[src]){
			if(!visited[x]){
				dfs(x,visited);
			}

		}

	}


	int countcomponnts(T src,unordered_map<int,bool> &visited){

		int tc=1;
		dfs(src,visited);
		for(auto x:h){
			if(!visited[x.first]){
				dfs(x.first,visited);
				tc++;//3
			}

		}

		cout<<endl;

		return tc;

	}



};

int main(){

	
	graph<int> g;


	g.addedge(0,1);
	g.addedge(0,4);
	g.addedge(1,4);
	g.addedge(4,3);
	g.addedge(1,3);
	g.addedge(1,2);
	g.addedge(2,3);


	g.addedge(100,101);
	g.addedge(101,104);
	g.addedge(104,100);


	g.addedge(200,201);
	g.addedge(201,204);
	g.addedge(204,200);
	g.addedge(200,205);

	// g.printgraph();

	unordered_map<int,bool> visited;
	
	cout<<g.countcomponnts(1,visited)<<endl;
	




	





	
	

	
	return 0;
}