#include <iostream>
using namespace std;
int nod(int n,int m)
{
    int x=0;
        while(m>0)
        {
            x=n%m;
            n=m;
            m=x;
        }
        return n;
}
int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=0;i<nod(n,m);i++)cout<<1;
    return 0;
}
