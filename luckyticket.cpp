#include <iostream>

using namespace std;

int main()
{
    int n,fh=0,sh=0;
    cin>>n;
    for(int i=0;i<6;i++)
    {
        if(i<3){
        sh=sh+n%10;
        n=n/10;}
        else{fh=fh+n%10; n=n/10;}
    }
    if(sh==fh)cout<<"YES"<<'\n';
    else cout<<"NO"<<'\n';
    return 0;
}
