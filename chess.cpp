#include <iostream>

using namespace std;
int lettertocipher(char x)
{
    if(x=='A')return 1;
    else if(x=='B')return 2;
    else if(x=='C')return 3;
    else if(x=='D')return 4;
    else if(x=='E')return 5;
    else if(x=='F')return 6;
    else if(x=='G')return 7;
    else if(x=='H')return 8;
    else {cout<<"ERROR"<<endl;
    return 0;
    }
}
int main()
{
    int flag=0,let1,let2,num1,num2;
    string letters="ABCDEFGH",ciphers="12345678";
    string nmove;
    cin>>nmove;
    if(nmove.size()!=5){cout<<"ERROR"<<endl;return 0;}
    for(int i=0;i<letters.size();i++){
        if(nmove[0]==letters[i])flag++;
    }
    if(flag!=1){cout<<"ERROR"<<endl;return 0;}
    flag=0;
    for(int i=0;i<=7;i++){
        if(nmove[1]==ciphers[i])flag++;
    }
    if(flag!=1){cout<<"ERROR"<<endl;return 0;}
    if(nmove[2]!='-'){cout<<"ERROR"<<endl;return 0;}
    flag=0;
    for(int i=0;i<letters.size();i++){
        if(nmove[3]==letters[i])flag++;
    }
    if(flag!=1){cout<<"ERROR"<<endl;return 0;}
    flag=0;
    for(int i=0;i<=7;i++){
        if(nmove[4]==ciphers[i])flag++;
    }
    if(flag!=1){cout<<"ERROR"<<endl;return 0;}
    let1=lettertocipher(nmove[0]);
    let2=lettertocipher(nmove[3]);
    num1=nmove[1]-'0';
    num2=nmove[4]-'0';
    int d =(let1-let2)*(let1-let2)+(num1 - num2)*(num1 - num2);
    if(d==5){cout<<"YES"<< endl;}
    else{cout << "NO" << endl;}
    return 0;
}
