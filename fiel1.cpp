#include<iostream>
using namespace std;
# define square(i) i* i
# define multi(a,b) a *b
int main(){
    cout << square(3)<<endl;// output 3 * 3
    cout << square(3+1)<< endl;// out put 3+1*3+1
    cout << multi(3,2)<< endl;
    cout << multi(3+1,4+2)<< endl;//output 3+1*4+2
}
