#include <iostream>
using namespace std;
int main() {
    // output come error because size is fix of a[3]
    int a[3]={1,2,3,4,5};
   cout<<a[9];

//    output is come correct below code because size is not fixed pf a[]

   int a[]={1,2,3,4,5};
   cout<<a[9];
}