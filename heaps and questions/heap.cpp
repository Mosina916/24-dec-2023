#include<iostream>
#include<vector>
using namespace std;
class heap{
	vector<int> v;
public:
	heap(){
		v.push_back(-1);

	}

	void heapify(int index){
		int minin=index;
		int li=2*index;
		int ri=li+1;

		if(li<=v.size()-1 and v[minin]>v[li]){
			minin=li;
		}


		if(ri<=v.size()-1 and v[minin]>v[ri]){
			minin=ri;
		}

		if(minin!=index){
			swap(v[minin],v[index]);
			heapify(minin);
		}

	}

	void pushh(int d){
		v.push_back(d);
		int c=v.size()-1;

		while(c!=1){
			int p=c/2;
		if(v[c]<v[p]){
			swap(v[c],v[p]);
		}
		c=p;
		}
	}

	void deleteinh(){
		swap(v[v.size()-1],v[1]);
		v.pop_back();
		heapify(1);

	}


	int size(){

		return v.size()-1;

	}

	bool empty(){
		return v.size()==1;

	}

	int top(){
		return v[1];

	}



};
int main(){
	heap h;
	h.pushh(1);
	h.pushh(2);
	h.pushh(3);
	h.pushh(17);
	h.pushh(19);
	h.pushh(36);
	h.pushh(7);
	h.pushh(25);
	h.pushh(100);

	h.pushh(0);

	while(!h.empty()){
		cout<<h.top()<<" ";//0 1  2
	h.deleteinh();

	}
	


	return 0;
}