     /* unintialize pointers are known as wild pointer*/
#include<iostream>
using namespace std;  
int main(){
int *p; /* wild pointer */
    /* Some unknown memory location is being corrupted. 
       This should never be done. */
//*p = 12; **ERROR**

int *p1;// wild pointer
int a=10;
p1=&a;
*p1=13;//this is fine we are chainging the value of a
cout << p1;
return 0;
}
