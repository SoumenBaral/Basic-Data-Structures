#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int q;
    cin>>q;
    while (q--)
    {
        stack<char>st;
        string ss;
        cin>>ss;
        for(char c : ss){
           
            
            if(!st.empty()){
                char t = st.top();
                if((t=='A' && c=='B')||(t == 'B' && c == 'A' )){
                    st.pop();
                    continue;
                 }
               
            }
         
                st.push(c);
            
            
            
    
        }
        if(st.empty())cout<<"YES"<<endl;
        else
        {
            cout<<"NO"<<endl;
        }
        
    }
    

    return 0;
}