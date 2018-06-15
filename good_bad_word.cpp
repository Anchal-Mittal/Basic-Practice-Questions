#include<iostream>
#include<set>
#include<iterator>
#include<algorithm>
char con_array[]={'b', 'c', 'd', 'e', 'f', 'g', 'h', 'j', 'k', 'l', 'm', 'n', 'p', 'q', 'r', 's', 't', 'v', 'w', 'x', 'y', 'z'} ;  
int size=sizeof(con_array)/sizeof(con_array[0]);	
int find_con(char s){
	for(int i=0;i<size;i++){
		if(s==con_array[i])
		return 1;
	}
	return 0;
}
using namespace std;
int main(){
   
	string str;
	int vow_num=0;
	int count_num=0;
	cout <<"ENTER THE STRING ";
	getline(cin,str);
	int len=str.length();
	cout<< "THE LENGTH OF THE STRING IS"<< endl;
	cout << len << endl;
	for(int i=0;i<len;i++){
		if((str[i]=='a')||(str[i]=='e')||(str[i]=='i')||(str[i]=='o')||(str[i]=='u'))
               vow_num++;
        else
		       count_num++;       
	}
   if(count_num>vow_num){
   	cout << "STRING IS BAD BECAUSE NUMBER OF CONSONANT IS MORE  " << endl;
   	return 0;
   }	  
   for(int i=1;i<len-1;i++){
	  if((find_con(str[i-1]))&&(find_con(str[i]))&&(find_con(str[i+1]))){
	     cout << "STRING IS BAD!! "<< endl;
	  		return 0;
	   }
   }
cout << "STRING IS GOOD " << endl;
return 0;
}
