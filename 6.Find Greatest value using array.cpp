
#include <iostream>
using namespace std;
int main()
{
   int largest;
   int arr[]={1,2,3,4,5};
   for(int i=0;i<5;++i)
   {
    if(largest<arr[i])
      {
        largest=arr[i];
      }
   }
  cout<<largest;

}