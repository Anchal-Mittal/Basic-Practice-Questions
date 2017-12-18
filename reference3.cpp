#include<iostream>
using namespace std;

int fun(int &x)
{
	return x;
}
int main()
{ int a=10;
	int b=20;
  cout << fun(a)<< endl;
	cout << fun(10)<< endl;//ERROR
  int &ref=b;//valid
  int &reff=10;// not valid ,will give error(due to assign var lvaue of type &int with const rvalue int
	return 0;
}
/* output 
line 10 will give 10
but line 11 will give error bcz we are assign varaible lvalue of type &int with int
*/
