#include <iostream>

using namespace std;

int main()
{
   int n,arr[1000],a=0,c=0;
   cin>>n;
   while(n!=0)
   {
       arr[a]=n%2;
       a++;
       n=n/2;
   }
   for(int i=0;i<=a;i++)
   {
       if(arr[i]==1)c++;
   }
   cout<<c<<endl;
    return 0;
}
