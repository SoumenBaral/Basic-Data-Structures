#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    stack<char>st;
    bool isValid(string s) {
        for(char c:s){
            if(c=='('||c=='{'||c == '['){
                st.push(c);
            }
            else{
                if(st.empty()){
                    return false;
                }
                else{
                    if(c==')'&& st.top()=='('){
                        st.pop();
                    }
                    else if(c =='}'&& st.top()=='{'){
                        st.pop();
                    }
                    else if(c ==']'&& st.top()=='['){
                        st.pop();
                    }
                    else{
                        return false;
                    }
                }
            }
        }
        if(st.empty())return true;
        else return false; 
    }
};
int main ()
{
    
    return 0;
}