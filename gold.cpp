#include <iostream>
using namespace std;

int main() {
    string a,b,c;
    cin>>a>>b>>c;
    
    string max_num=a;
    
    if(b.size()>max_num.size()||(b.size() == max_num.size()&&b>max_num)){max_num = b;}
    if(c.size()>max_num.size()||(c.size()==max_num.size()&&c>max_num)){max_num = c;}
    cout << max_num << endl;
    return 0;
}
