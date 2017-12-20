#include<iostream>
using namespace std;
int main(){
		   int i;
		   for(i=0;i<5;i++){
		   	int i=10;   //** no error because initial i is decalred as globally
		   	cout << i<< " ";
		   	i++;
		   }
		   /*
		   for(int j=0;j<5;j++){
		   	int j=10;          //"" error because both j are declared in local scope of for loop;
		   	cout << j<< " ";
		   	i++;
		   } */

		   for(i=0;i<5;i++){
		   	int k=10;   //** no error because initial i is decalred as globally
		   	cout << k<< " ";
		   	i++;
		   }
		   //cout << endl << k; **error can not access because k is declatred in local scope of for loop
return 0;
}
