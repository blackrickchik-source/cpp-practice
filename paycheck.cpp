#include <iostream>

using namespace std;

int main()
{
   long long int arr[10],max,min;
   cin>>arr[0]>>arr[1]>>arr[2];
   max=arr[0];
   for(int i = 1; i < 3; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }
    min = arr[0];
    for(int i = 1; i < 3; i++) {
        if(arr[i] < min) {
            min = arr[i];
        }
    }
    cout<<max-min<<endl;
    return 0;
}
