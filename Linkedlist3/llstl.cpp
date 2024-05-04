#include <iostream>
#include <list>
using namespace std;

int main(){

	// list<data> name;
	list<int> l;

	l.push_back(3);
	l.push_back(5);
	l.push_back(2);
	l.push_back(1);
	l.push_back(6);

	l.push_front(76);
	l.push_front(34);

	// l.reverse();

	l.sort();

	

	// for each loop __>print

	// for(datatype vn:entity to be itreated){
	// 	// print
	// }


	//34 76 3 5 2 1 6

	for(int x:l){

		cout<<x<<"-->";



	}







	



	return 0;
}