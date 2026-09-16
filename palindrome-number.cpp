#include <vector>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) 
    {
        if(x<0)return false;
        vector<int> vec;
        while(x>0)
        {
            vec.push_back(x%10);
            x=x/10;
        }
        for(int i=0;i<vec.size()/2;i++)
        {
            if(vec[i]!=vec[vec.size()-1-i])
                return false;
        }
        return true;
    }
};
