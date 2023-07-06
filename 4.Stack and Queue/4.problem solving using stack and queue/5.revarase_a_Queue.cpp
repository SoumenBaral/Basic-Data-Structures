#include<bits/stdc++.h>
using namespace std;
queue<int> reverseQueue(queue<int> q)
{
    // Write your code here.
    stack<int>st;
    while(!q.empty())
    {
        st.push(q.front());
        q.pop();
    }
    while(!st.empty()){
        q.push(st.top());
        st.pop();
    }
    return q;
}

int main ()
{
    
    return 0;
}