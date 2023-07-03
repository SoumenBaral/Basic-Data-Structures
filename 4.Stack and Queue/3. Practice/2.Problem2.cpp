// Question: Take a stack of size N and a queue
//  of size M as input. Then check if both of them 
//  are the same or not in the order of removing. 
//  You should use STL to solve this problem.

// Sample Input
// Sample Output
// 5
// 10 20 30 40 50
// 5
// 10 20 30 40 50
// NO
// 5
// 10 20 30 40 50
// 4
// 10 20 30 40
// NO
// 5
// 10 20 30 40 50
// 5
// 50 40 30 20 10
// YES

#include<bits/stdc++.h>
using namespace std;
int main ()
{
    stack<int>st;
    queue<int>q;
     int n,m;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        st.push(x);
    }
    cin>>m;
    for(int i=0; i<m; i++)
    {
        int x;
        cin>>x;
        q.push(x);
    }
    if(st.size()!=q.size())
    {
        cout<<"They are Not same"<<endl;
    }
    else{
        bool isSame = true;
        while (!st.empty())
        {
            int aVal = st.top();
            st.pop();
            int bVal = q.front();
            q.pop();
            if(aVal!=bVal)isSame = false;

        }
        if (isSame)
        {
            cout<<"They are same"<<endl;
        }
        else{
            cout<<"They are not same"<<endl;
        }
    }
    return 0;
}