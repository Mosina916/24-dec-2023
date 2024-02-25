#include<iostream>
#include<cstring>
using namespace std;
int main(){
	// char arr[4]={'B','O','Y','\0'};
	// char arr[4]="BOY";
	// cout<<arr<<endl;
	// int a=10;

	// string s="abc";

	// cout<<s<<endl;

	// string s;
	// /*char arr[100];
	// cin.getline(arr,100);*/
	// // cin>>s;
	// // cout<<s<<endl;
	// getline(cin,s);

	// cout<<s<<endl;


	// < > <= >= != ==  work on strings on the basis of ascii values
 		// string s1="apqcd";//5
 		// string s2="ase";//3

	// string s1="apfd";//5
 // 		string s2="apfabc";//3

 // 		if(s1>s2){
 // 			cout<<"S1 is greater than s2"<<endl;


 // 		}
 // 		else{
 // 			cout<<"S2 is greater than s1"<<endl;
 // 		}


	// concatenation +  append 
	// boy -->boycat
	// cat


	// string s1="hello";
	// string s2="world";
	// // cout<<s1+s2<<endl;
	// 	cout<<s2+s1<<endl;


	// string s1="elephant";

	// stringname.substr(index);
	// cout<<s1.substr(2)<<endl;

	// // stringname.substr(index,noofchar);
	// cout<<s1.substr(2,4)<<endl;


	// string s="hel";
	// s.push_back('l');
	// s.push_back('o');

	// cout<<s<<endl;


	// s.pop_back();
	// s.pop_back();
	// s.pop_back();

	// cout<<s<<endl;

		// string s="hello";

		// cout<<s.length()<<endl;

	// rotatebyncharacters


	// codingblocks n=3  ckscodingblo

	string s="codingblocks";
	int n;
	cin>>n;//13


	int l=s.length();//12
	n=n%l;


	string s2=s.substr(0,l-n);//codingblo
	string s3=s.substr(l-n);//cks

	cout<<s3+s2<<endl;

























	
	

	return 0;
}