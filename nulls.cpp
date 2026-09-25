#include <iostream>

using namespace std;

int main()
{
    string n;
    int arr[100],v=0,max=0;
    cin>>n;
    for(int i=0;i<100;i++)
    {
        arr[i]=0;
    }
    for(int i=0;i<n.size();i++)
    {
        if(n[i]=='0')arr[v]++;
        else v++;
    }
    if(n[n.size()-1]=='0')v++;
    max=arr[0];
    for(int i=0;i<v;i++)
    {
        if(arr[i]>max)max=arr[i];
    }
    cout<<max<<endl;
    return 0;
}
