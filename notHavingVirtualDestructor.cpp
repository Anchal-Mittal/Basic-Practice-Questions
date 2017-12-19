            //Problem in a given code 
class A{
public:
A() {}
~A(){}
};

class B: public A{
public:
B():A(){}
~B(){}
};

int main(void)
{
  A* a = new B();
  delete a;// can not delete because it is static and class A does not have virtual destructor
}
/*
  The behavior is undefined because A’s destructor is not virtual. From the spec:

( C++11 §5.3.5/3 ) if the static type of the object to be deleted is different from its dynamic type, 
the static type shall be a base class of the dynamic type of the object to be deleted and the static 
type shall have a virtual destructor or the behavior is undefined.
*/
