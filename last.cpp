#include <iostream>
using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b;
    c=a;
    if(b==0)
    {
        cout<<1<<endl;
        return 0;
    }
    if(b==1)
    {
        cout<<a%10<<endl;
        return 0;
    }
    for(int i=0;i<b-1;i++)
    {
        c=c*a;
        c=c%10;
    }
    cout<<c<<endl;
    return 0;
}
