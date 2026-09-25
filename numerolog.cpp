#include <iostream>
using namespace std;

int main()
{
    string sec;
    cin>>sec;
    int res=0,count=0,res2=0,res3=0,sum=0;
    if(sec.size()==1){cout<<sec<<" "<<0<<'\n';return 0;}
    for(int i=0;i<sec.size();i++)
    {
        res=res+sec[i]-'0';
    }
    count++;
    if(res>9)
    {
        while(res>9)
        {
            sum=0;
            res3=res;
            count++;
            while(res3>0)
            {
                sum=sum+res3%10;
                res3=res3/10;
            }
            res=sum;
        }
    }
    cout<<res<<" "<<count<<'\n';
    return 0;
}
