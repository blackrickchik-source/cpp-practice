#include <iostream>

using namespace std;
int main()
{
    int n,a=0,b=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){cin>>arr[i];}
    for(int i=0;i<n;i++)
    {
        if(arr[i]%2!=0){cout<<arr[i]<<" ";a++;}
    }
    cout<<endl;
    for(int i=0;i<n;i++)
    {
        if(arr[i]%2==0){cout<<arr[i]<<" ";b++;}
    }
    cout<<endl;
    if(b>=a)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
