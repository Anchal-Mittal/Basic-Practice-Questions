#include <iostream>
using namespace std;
#define merge(a, b) a##b

int main(){
    cout <<merge(8,4)<< endl;
   // The macro is expended as 2 + 3 ##3 + 5, not as 5*8
	  cout << merge(2+3, 3+5);
		return 0;
}
/* Output: 84
           40
*/
