#include <iostream>

using namespace std;

int main()
{
    long long int a=0,b=0,c=0,d=0;
    cin>>a>>b>>c>>d;
    for(int i=-100;i<=100;i++){
        if(a*i*i*i+b*i*i+c*i+d==0)cout<<i<<" ";
    }
    return 0;
}
