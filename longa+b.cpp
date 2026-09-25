#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    string a,b;
    cin>>a>>b;
    vector<int> res;
    int z=a.size()-1,x=b.size()-1,car=0,sum=0;
    while(z>=0||x>=0)
    {
        if(z>=0 && x>=0) {
            sum = a[z] + b[x] - '0' - '0' + car;
            z--;
            x--;
        } else if(z>=0) {
            sum = a[z] - '0' + car;
            z--;
        } else {
            sum = b[x] - '0' + car;
            x--;
        }
        car=0;
        if(sum>9)
        {
            sum=sum%10;
            car=1;
        }
        res.push_back(sum);
    }
    if(z>-1)
    {
        while(z>=0){
        sum=a[z]-'0'+car;
        car=0;
        z--;
        if(sum>9)
        {
            sum=sum%10;
            car=1;
        }
        res.push_back(sum);
        }
        
    }
    else if(x>-1)
    {
        while(x>=0){
        sum=b[x]-'0'+car;
        car=0;
        x--;
        if(sum>9)
        {
            sum=sum%10;
            car=1;
        }
        res.push_back(sum);
        }
    }
    if(car==1)
    {
        res.push_back(1);
    }
    reverse(res.begin(),res.end());
    
    for(int i=0;i<res.size();i++) 
    {
        cout << res[i];
    }
    cout << '\n';
    return 0;
}
