#include <iostream>

using namespace std;

int main()
{
    int a,b,c,d,e,f,g,h;
    cin>>a>>b>>c>>d>>e>>f>>g>>h;
    int res1=a+c+e+g;
    int res2=b+d+f+h;
    if(res1==res2)cout<<"DRAW";
    else if(res1>res2)cout<<"1";
    else cout<<"2";
    return 0;
}
