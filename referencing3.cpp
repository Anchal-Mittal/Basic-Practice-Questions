#include<iostream>
using namespace std;

int main()
{
int *ptr = NULL;
int x=10;
int &ref = *ptr;//valid 
int *ptr1=&x;//valid
//int &ref;not valid should be initialize
int *ptrr;//valid can be declare without initialization
//int *&reff= &x;//not initialized 
//int &*refff;//cannot declare pointer to int&
//cout << ref;
}
