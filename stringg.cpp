#include <iostream>

int main(int argc, const char * argv[]) {
    int a[] = {1, 2, 3, 4, 5, 6};
    std::cout << (1 + 3)[a] - a[0] + (a + 1)[2];
}

/*
  The above will output 8, since:

(1+3)[a] is the same as a[1+3] == 5

a[0] == 1

(a + 1)[2] is the same as a[3] == 4

This question is testing pointer arithmetic knowledge, and the magic behind square brackets with pointers.


*/
