#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int k;
    long long int result;
    cin>>k;
    vector<int> n(k),m(k);
    for(int i=0;i<k;i++)
    {
        cin>>n[i]>>m[i];
    }
    for(int i=0;i<k;i++)
    {
    result=0;
    result=19*m[i];
    result=result+ (n[i] + 239)*(n[i] + 366)/2;
    cout<<result<<'\n';
    }
    return 0;
}
