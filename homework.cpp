#include <iostream>

using namespace std;
int sumofpositive(int arr[],int n){
int sum=0;
for(int i=0;i<n;i++)
{
    if(arr[i]>0)sum=sum+arr[i];
}
return sum;
}
int main()
{
    int n,max,min,maxdex=0,mindex=0;
    int multi=1;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){cin>>arr[i];}
    max=arr[0];
        for(int i=1;i<n;i++)
            {
                if(arr[i]>max){max=arr[i];
                maxdex=i;}
            }
    min=arr[0];
        for(int i=1;i<n;i++)
            {
                if(arr[i]<min){min=arr[i];
                mindex=i;}
            }
    cout<<sumofpositive(arr,n);
    if(mindex<maxdex)for(int i=mindex+1;i<maxdex;i++){multi=multi*arr[i];}
    else for(int i=maxdex+1;i<mindex;i++){multi=multi*arr[i];}
    cout<<" "<<multi<<endl;
    return 0;
}
