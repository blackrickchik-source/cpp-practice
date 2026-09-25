#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n,h,p;
    cin>>n;
    vector<int> number;
    number.push_back(1);
    for(int i=1;i<=n;i++)
    {
        h=0;
        for(int j=0;j<number.size();j++)
        {
            p=number[j]*i+h;
            number[j]=p%10;
            h=p/10;
        }
        while(h>0)
        {
            number.push_back(h%10);
            h=h/10;
        }
    }
     for(int i = number.size() - 1; i >= 0; i--) {
        cout << number[i];
    }
    cout << endl;
    return 0;
}
