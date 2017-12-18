#include<iostream>
using namespace std;
int main(){
	int b;
	int a=10;
	void *pointer=&a; //is valid  bcz pointer can be of type void
	void &ref=b; //is not valid bcz reference can not be of type void
	int*pp=&b;
	int *ppp=b;//not valid bcz pointer always contain the refence(address)
	int &reff=b;//valid
	int &refff=&a;// not valid
	return 0;
}
