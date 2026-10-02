#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n,h,p;
    cin>>n;
    vector<int> number;
    number.push_back(1);
    for(int i=0;i<n;i++)
    {
        h=0;
        for(int j=0;j<number.size();j++)
        {
            p=number[j]*2+h;
            number[j]=p%10;
            h=p/10;
        }
        if(h>0){number.push_back(h);}
    }
     for(int i = number.size() - 1; i >= 0; i--) {
        cout << number[i];
    }
    cout << endl;
    return 0;
}
