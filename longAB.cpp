#include <iostream>
#include <vector>
using namespace std;

int main()
{
    string a,b;
    cin>>a>>b;
    vector<int> num,ber;
    for(int i=a.size()-1;i>=0;i--)
    {
        num.push_back(a[i]-'0');
    }
    for(int i=b.size()-1;i>=0;i--)
    {
        ber.push_back(b[i]-'0');
    }
    if(ber.size()==1 && ber[0]==0){cout<<0<<'\n';return 0;}
    else if(ber.size()==1 && ber[0]==1)
    {
        cout<<a<<'\n';
        return 0;
    }
    vector<int> result(num.size() + ber.size(),0); 
   for(int i=0;i<num.size();i++) {
        for(int j=0;j<ber.size();j++)
        {
            result[i+j]+=num[i]*ber[j];
            result[i+j+1]+=result[i + j]/10;
            result[i+j]%=10;
        }
    }
    while(result.size()>1&&result.back()==0)result.pop_back();
    for(int i = result.size()-1; i >= 0; i--)cout<<result[i];
    return 0;
}
