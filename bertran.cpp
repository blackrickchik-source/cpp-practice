#include <iostream>

using namespace std;

int main()
{
    int n,p=0,c;
    cin>>n;
    for(int i=n+1;i<2*n;i++)
    {
        c=0;
        for(int j=1;j*j<=i;j++)
        {
            if(i%j==0)c++;
        }
        if(c==1)p++;
    }
    cout<<p<<endl;
    return 0;
}

