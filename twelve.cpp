#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>
using namespace std;
void deletenum(string&s)
{
    int t;
    cout<<"1-remove letters, 2-remove numbers"<<'\n';
    cin>>t;
    if(t==1)
    {
        s.erase(remove_if(s.begin(),s.end(),[](unsigned char c){return isalpha(c);}),s.end());
    }
    else{
        s.erase(remove_if(s.begin(),s.end(),[](unsigned char c){return isdigit(c);}),s.end());
    }
}
int main()
{
    string s="qwe12e12eqwer23r2eqwe12e`1w`w2`w`ee3ref4rsdfw";
    deletenum(s);
    for(auto i:s)
        cout<<i;
    return 0;
}
