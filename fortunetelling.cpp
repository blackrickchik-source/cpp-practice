#include <iostream>

using namespace std;

int main()
{
   int n;
   long long int sum=0;
   cin>>n;
   for(int i=1;i<=n;i++){
    if(n%i==0)sum=sum+i;
   }
   cout<<sum<<endl;
    return 0;
}
