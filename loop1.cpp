#include<iostream>
using namespace std;
int main(){
	int x=0;
	while(x<=10)
		 for(; ;)
		  if(++x%10==0)
			 break;
	cout << "x =" <<x;
return 0;
}

/* output x=20
   because when x=0 , for loop execute upto x=10.While loop execute once again due to x<=10 .so for loop will also 
   execute 10 times then the final value of x will be 20.
 */ 
