#include <map>
#include <string>
using namespace std;
class Solution {
public:
    int romanToInt(string s) 
    {
        map<char,int> roma;
        roma['I']=1;
        roma['V']=5;
        roma['X']=10;
        roma['L']=50;
        roma['C']=100;
        roma['D']=500;
        roma['M']=1000;
        int result=0;
        for(int i=0;i<s.size();i++)
        {
            if(i+1<s.size()&&roma[s[i]]<roma[s[i+1]])
                result-=roma[s[i]];
            else
                result+=roma[s[i]];
        }
        return result;
    }
};
