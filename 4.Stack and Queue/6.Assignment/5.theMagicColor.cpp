// Red+Blue = Purple
// Red+Green = Yellow
// Blue+Green = Cyan
#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int q;
    cin>>q;
    while (q--)
    {
        stack<char>st;
        stack<char>rD;
        int n;
        cin>>n;
        for(int i = 0;i<n;i++){
            char c;
            cin>>c;
            if(!st.empty()){
                char t = st.top();
                if((t == 'R'&& c == 'B')|| (t == 'B'&& c == 'R') ){
                    st.pop();
                    st.push('P');
                    continue;
                }
                else if((t == 'R'&& c == 'G')||(t == 'G'&& c == 'R')){
                    st.pop();
                    st.push('Y');
                    continue;

                }
                else if((t == 'B'&& c == 'G') || (t == 'G'&& c == 'B')){
                    st.pop();
                    st.push('C');
                    continue;
                }
                else if(t == c){
                    st.pop();
                    continue;

                }
            }
            // else{
                st.push(c);
            // }
        }
        while (!st.empty()) {
             if (!rD.empty() && st.top() == rD.top()) {
             rD.pop();
            }
             else {
                  rD.push(st.top());
                    }
             st.pop();
        }
        while (!rD.empty())
        {
            cout<<rD.top();
            rD.pop();
        }
        
        cout<<endl;
        
    }
    
    return 0;
}