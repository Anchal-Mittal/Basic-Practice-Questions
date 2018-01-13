#include<iostream>
using namespace std;
# define get(a) #a
int main(){
    cout << get(hello);
    int a =98;
    //cout << #a; error
    cout<< get(a);// no output
}
/* output
         hello
*/
