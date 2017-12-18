#include<iostream>
using namespace std;

int main(){
	int var =5;
	int& poin=var;
	poin=20;
	cout << "var= "<< var<< endl;
	var=70;
	cout <<"poin" << poin<< endl;
return 0;
}
	/*
What will be the output of the above code?
Output:
var = 20
poin = 70
Reason/Explanation:
poin is an alias of var, so if we change either of them, we can see the change in other as well.
*/
