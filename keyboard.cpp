#include <iostream>
#include <cmath>
using namespace std;

int main()
{
   string key="qwertyuiopasdfghjklzxcvbnm";
   char x;
   cin>>x;
   if(x=='m')cout<<'q'<<'\n';
   else{
   for(int i=0;i<key.size();i++)
   {
       if(x==key[i]){
        cout<<key[i+1]<<'\n';
        return 0;
       }
   }
   }
    return 0;
}
