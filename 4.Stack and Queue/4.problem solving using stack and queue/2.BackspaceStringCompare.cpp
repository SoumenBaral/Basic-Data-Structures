#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    stack<char>ss , tt;
    bool backspaceCompare(string s, string t) {
        for(char c: s){
            if(c=='#'){
                if(!ss.empty())ss.pop();
            }
            else{
                ss.push(c);
            };
        };
         for(char c: t){
            if(c== '#'){
                if(!tt.empty())tt.pop();
            }
            else{
                tt.push(c);
            };
        };
       
       return ss==tt;
    }
};
int main ()
{
    
    return 0;
}