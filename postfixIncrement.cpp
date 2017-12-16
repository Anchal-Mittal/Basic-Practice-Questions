#include<iostream>
using namespace std;
int main(){
	int a = 8;
	cout << ++a <<endl; **output 9
	cout << a <<endl; **output 9
	cout << ++a + ++a <<endl; **output 22
	cout << a <<endl; **output 11
	cout << ++a + a++ <<endl; **output 25
	cout << a <<endl; **output 13
	return 0;
}
