#include<iostream>
#include<vector>
using namespace std;
int main(){
	// // vector<datatype> vname;
	vector<int> v;
	// elements -->push -->vectorname.push_back
	v.push_back(4);
	v.push_back(6);
	v.push_back(3);
	v.push_back(8);
	v.push_back(10);
	v.push_back(18);

	cout<<v.at(2)<<endl;

	// cout<<v.size()<<endl;
	// cout<<v.capacity()<<endl;

	// for(int i=0;i<v.size();i++){
	// 	cout<<v[i]<<" ";
	// }
	// cout<<endl;

	// v.pop_back();
	// v.pop_back();

	// for(int i=0;i<v.size();i++){
	// 	cout<<v[i]<<" ";
	// }
	// cout<<endl;

	// cout<<v.size()<<endl;
	// cout<<v.capacity()<<endl;

	// cout<<v.begin()<<endl;

	// auto x=10;
	// auto x=40;
	// cout<<x<<endl;

	// for(auto i=v.begin();i!=v.end();i++){
	// 	cout<<*i<<" ";
	// 	// cout<<i<<endl;
	// }
	// cout<<*i






	
	return 0;
}