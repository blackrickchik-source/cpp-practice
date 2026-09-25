#include <iostream>

using namespace std;

int main()
{
    long long int a,b,c,d,e,nok;
    cin>>a>>b;
    d=a,e=b;
    while(b!=0){
        c=a%b;
        a=b;
        b=c;
    }
    nok=d*e/a;
    cout<<nok<<endl;
    return 0;
}
