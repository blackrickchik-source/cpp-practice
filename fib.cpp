#include <iostream>
using namespace std;

int main()
{
    int arr[31],n;
    arr[0]=0;
    arr[1]=1;
    arr[2]=1;
    arr[3]=2;
    arr[4]=3;
    arr[5]=5;
    arr[6]=8;
    arr[7]=13;
    arr[8]=21;
    arr[9]=34; 
    arr[10]=55;
    arr[11]=89;
    arr[12]=144; 
    arr[13]=233;
    arr[14]=377; 
    arr[15]=610; 
    arr[16]=987; 
    arr[17]=1597;
    arr[18]=2584; 
    arr[19]=4181; 
    arr[20]=6765; 
    arr[21]=10946; 
    arr[22]=17711; 
    arr[23]=28657;
    arr[24]=46368; 
    arr[25]=75025; 
    arr[26]=121393; 
    arr[27]=196418; 
    arr[28]=317811; 
    arr[29]=514229;
    arr[30]=832040; 
    cin>>n;
    cout<<arr[n]<<'\n';
    return 0;
}
