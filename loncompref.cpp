#include <vector>
#include <string>
using namespace std;
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) 
    {
        string com="";
        if(strs.empty())return com;
        int i=0;
        char c;
        while(i!=strs[0].size())
        {
            c=strs[0][i];
            for(int j=1;j<strs.size();j++)
            {
                if(i>=strs[j].size())return com;
                else if(strs[j][i]!=c)return com;
            }
            com.push_back(c);
            i++;
        }
        return com;
    }
};
