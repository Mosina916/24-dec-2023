#include<iostream>

using namespace std;

void f(int b[], int n) {
	for(int i=0; i<=n-1; i++){ 
		b[i] = b[i]+10;
	}
	for(int i=0; i<=n-1; i++) {
		cout << b[i] << " ";
	}
	cout << endl;
}

int main() {
	int arr[] = {1, 2, 3, 4, 5};
	int n = sizeof(arr)/sizeof(int);
	for(int i=0; i<=n-1; i++) {
		cout << arr[i];
	}
	cout << endl;
	f(arr, n);
	for(int i=0; i<=n-1; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
	return 0;
}