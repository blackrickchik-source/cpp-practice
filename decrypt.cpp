#include <iostream>

using namespace std;
string decrypting(string enc)
{
    string az="abcdefghijklmnopqrstuvwxyz ";
    string ex="0123456789ABCDEFGHIJKLMNOPQ";
    string res="";
    int ind,nom;
    for(int j=0;j<enc.size();j++){
    for(int i=0;i<ex.size();i++)
    {
        if(enc[j]==ex[i])
        {
            ind=i;
            break;
        }
    }
    nom=ind-j-1;
    while(nom<=0)
    {
        nom=nom+27;
    }
    res.push_back(az[nom-1]);
    }
    return res;
}
int main()
{
    string ench;
    cin>>ench;
    cout<<decrypting(ench)<<endl;
    return 0;
}
