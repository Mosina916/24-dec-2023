#include<iostream>
#include<list>
#include <unordered_map>
using namespace std;

template<typename T>
class graph{

	// unordered_map<string,list<string> > h;
	unordered_map<T,list<T> > h;

public:

	// void addedge(string u,string v,bool bird=false){

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


};

int main(){

	graph<string> g;
	g.addedge("modi","trump",true);
	g.addedge("modi","yogi",true);
	g.addedge("prabhu","modi");
	g.addedge("yogi","prabhu");
	g.addedge("putin","trump");
	g.addedge("putin","modi");
	g.addedge("putin","pope");
	g.addedge("pope"," ");


	// g.addedge("putin","modi");
	// graph<int> g;


	// g.addedge(0,1);
	// g.addedge(0,4);
	// g.addedge(1,4);
	// g.addedge(4,3);
	// g.addedge(1,3);
	// g.addedge(1,2);
	// g.addedge(2,3);


	g.printgraph();


	// unordered_map<string,string > h;
	// h["mango"]="yellow";




	

	
	return 0;
}