#include<iostream>
using namespace std;

int reverseNumber(int NUM){
	static int BASE=1;
	static int COUNT=0;
	if(NUM >0){
		reverseNumber(NUM /10);
		COUNT+=(NUM%10)*BASE;
		BASE=BASE*10;
	}
	return COUNT;
}

int main(){
	int NUM;
	cout<< "ENTER THE NUMBER DO U WANTTO REVERSE"<<endl;
	cin >> NUM;
    int RESULT=reverseNumber(NUM);
    cout << "THE RESULT IS "<< RESULT<<endl;
return 0;
}
