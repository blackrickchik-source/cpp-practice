#include <iostream>

using namespace std;

int main()
{
    string eq;
    cin>>eq;
    int a,b,x;
    if(eq[0]=='x')
    {
        if(eq[1]=='-')a=(eq[2]-'0')*(-1);
        else a=eq[2]-'0';
        b=eq[4]-'0';
        x=b-a;
        cout<<x<<'\n';
    }
    else if(eq[4]=='x')
    {
        if(eq[1]=='-')a=(eq[2]-'0')*(-1);
        else a=eq[2]-'0';
        b=eq[0]-'0';
        x=a+b;
        cout<<x<<'\n';
    }
    else if(eq[2]=='x'&&eq[1]=='+')
    {
        a=eq[0]-'0';
        b=eq[4]-'0';
        x=b-a;
        cout<<x<<'\n';
    }
    else if(eq[2]=='x'&&eq[1]=='-')
    {
        a=eq[0]-'0';
        b=eq[4]-'0';
        x=a-b;
        cout<<x<<'\n';
    }
    return 0;
}
