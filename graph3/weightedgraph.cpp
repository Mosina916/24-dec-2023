#include<iostream>
#include<list>

#include<queue>
#include <unordered_map>
using namespace std;

template<typename T>
class graph{
	unordered_map<T,list<pair<T,int> > > h;

public:



	void addedge(T u,T v,int dist,bool bird=true){
		h[u].push_back(make_pair(v,dist));
		if(bird){
			h[v].push_back(make_pair(u,dist));

		}

		

	}

	void printgraph(){
		for(auto x: h){
			cout<<x.first<<" : ";//bhopal
			for(auto p:x.second){
				cout<<'('<<p.first<<','<<p.second<<')';

			}
			cout<<endl;

		}
		
	}

	


};

int main(){

	// int x=10;
	// cout<<x<<endl;

	graph<string> g;


	g.addedge("Amritsar","agra",1);
	g.addedge("Amritsar","jaipur",4);
	g.addedge("jaipur","delhi",2);
	g.addedge("delhi","agra",1);
	g.addedge("jaipur","mumbai",8);
	g.addedge("bhopal","mumbai",2);
	g.addedge("bhopal","agra",2);


	g.printgraph();



	
	

	
	return 0;
}