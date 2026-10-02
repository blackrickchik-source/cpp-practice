#include <iostream>
#include <vector>
#include <deque>
#include <algorithm>
using namespace std;
vector<int> window2(const vector<int>& v, int k)
{
    vector<int> res;
    deque<int> dq;

    for (int i = 0; i < (int)v.size(); i++)
    {
        dq.push_back(i);
        if ((int)dq.size() > k)
            dq.pop_front();
        if ((int)dq.size() == k)
        {
            auto it = max_element(v.begin() + dq.front(),
                                  v.begin() + dq.back() + 1);
            res.push_back(*it);
        }
    }
    return res;
}

vector<int> window(const vector<int>&v,const int k)
{
vector<int> res;
deque<int> dq;
for(int i=0;i<v.size();i++)
{
     if(!dq.empty()&&dq.front()<=i-k)dq.pop_front();
     while(!dq.empty()&&v[dq.back()]<=v[i])
     {
         dq.pop_back();
     }
     dq.push_back(i);
     if(i>=k-1)
     {
         res.push_back(v[dq.front()]);
     }
}
return res;
}

int main()
{
    vector<int> vec={0,2,1,5,7,8,4,2,0,1,-2,6,1,7};
    int n=4;
    vector<int> v2=window(vec,n);
    for(int i:v2)
    {
        cout<<i<<" ";
    }
    return 0;
}


