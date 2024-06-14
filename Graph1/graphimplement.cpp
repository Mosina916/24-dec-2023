#include<iostream>
#include<list>
using namespace std;
class graph{

	list<int>*arr;
	int N;
public:
	graph(int n=5){
		arr=new list<int>[n];
		N=n;
	}


	void addedge(int u,int v,bool bidir=true){
		arr[u].push_back(v);
		if(bidir==true){
			arr[v].push_back(u);

		}
	}

	void printgraph(){
		for(int i=0;i<N;i++){

		cout<<i<<"--> ";
		for(auto x:arr[i]){
			cout<<x<<" ";

		}
		cout<<endl;
	}
}


};

int main(){

	graph g;


	g.addedge(0,1);
	g.addedge(0,4);
	g.addedge(1,4);
	g.addedge(4,3);
	g.addedge(1,3);
	g.addedge(1,2);
	g.addedge(2,3);


	g.printgraph();


	
	return 0;
}