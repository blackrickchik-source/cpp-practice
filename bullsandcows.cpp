#include <iostream>

using namespace std;

int main()
{
    int n=0,n1=0;
    string bulls,cows;
    cin>>bulls>>cows;
    for(int i=0;i<4;i++)
    {
        if(bulls[i]==cows[i])n++;
    }
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++){
            if(bulls[i]==cows[j])n1++;
        }
    }
    cout<<n<<" "<<n1-n;
    return 0;
}
