#include<iostream>
using namespace std;
int main(){
	 int count=0;
	 for(int i=10;i==1;i++)
		 count++;
	 cout << "THE COUNT WILL BE " <<count << endl;
return 0;
}
/* output
 THE COUNT WILL BE 0
 because initial i=10 that does not satisfy the condition i==1,so loop will not be executed.
 */
