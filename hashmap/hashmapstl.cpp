#include <iostream>
// #include <unordered_map> //0(1)
#include <map> //0(1)
using namespace std;

int main(){

	map<string,string> h;
	// arr[0]=5;
	h["abc"]="pink";
	h["apple"]="red";

	h["mango"]="yellow";

	for(auto x:h){

		cout<<x.first<<"--> "<<x.second<<endl;


	}



	return 0;
}