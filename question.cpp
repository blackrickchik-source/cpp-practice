#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a,b,c,d,e,f;
    cin>>a>>b;
    d=a*a-4*b;
    c=(a+ sqrt(d))/2;
    e=(a- sqrt(d))/2;
    if(c>e)cout<<e<<" "<<c<<'\n';
    else cout<<c<<" "<<e<<'\n';
    return 0;
}
