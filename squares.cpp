#include <iostream>

using namespace std;

int main()
{
    string mo;
    cin>>mo;
    int x=(mo[0]-'@')+(mo[1]-'0');
    if(x%2==0)cout<<"BLACK"<<'\n';
    if(x%2==1)cout<<"WHITE"<<'\n';
    return 0;
}
