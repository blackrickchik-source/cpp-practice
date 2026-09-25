#include <iostream>

using namespace std;

int main()
{
    int n,a,b,c=0,d,max1=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        cin>>b;
        if(max1<a&&b==1){max1=a;
        d=i+1;
        }
        if(b==1)c++;
    }
    if(c==0)
    {
        cout<<-1;
        return 0;
    }
    cout<<d;
    return 0;
}
