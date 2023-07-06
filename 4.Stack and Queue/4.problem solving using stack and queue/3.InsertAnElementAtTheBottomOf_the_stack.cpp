#include <bits/stdc++.h> 
using namespace std;
stack<int> pushAtBottom(stack<int>& st, int x) 
{
    // Write your code here.
    stack<int>newSt;
    while(!st.empty()){
        newSt.push(st.top());
        st.pop();
    }
    newSt.push(x);
    while(!newSt.empty()){
        st.push(newSt.top());
        newSt.pop();
    }
    return st;
}
int main(){
    return 0;
}