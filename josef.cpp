#include <iostream>
#include <queue>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    queue<int> arr;
    for(int i=0;i<n;i++)
        arr.push(i+1);
    while(arr.size()>1)
    {
        for(int i=0;i<k-1;i++)
        {
                arr.push(arr.front());
                arr.pop();
        }
        arr.pop();
    }
    cout<<arr.front();
    return 0;
}
