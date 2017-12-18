#include<iostream>
using namespace std;
void fun(int &a , int &b){
	a=9;
  b=8;
	cout << a+b;
}
int main(){
	int a=2;
	int b=6;
	fun(a,a);
	
return 0;
}
/* output 16
   in function fun(a,a)
   only the address of a is pass so changes will be occured from 2 to 9 and 9 to 8.
   so 8+8=16 will be evaluated.No change will be occur in b*/
