#include <iostream>
using namespace std;
int main()
{
   int arr[]={1,2,1,3,2,5};

   for(int i=0;i<6;++i)
   {
       bool dup=false;
      for(int j=i+1;j<6;++j)
      {
         if(arr[i]==arr[j] && arr[j]!=-1)
         {
            dup=true;
            arr[j]=-1;
            break;
         }
     }
     if(!dup && arr[i]!=-1)
     {
      cout<<arr[i];
     }
}
}