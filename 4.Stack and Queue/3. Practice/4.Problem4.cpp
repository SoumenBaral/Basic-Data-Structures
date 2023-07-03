// Take a queue of size N as input. You need to copy 
// those elements in another queue in reverse order. 
// You might use stack here. You should use STL to 
// solve this problem. After copying in another queue,
//  print the elements of that queue.
// Sample Input
// 5
// 10 20 30 40 50
// Sample Output
// 50 40 30 20 10

#include<bits/stdc++.h>
using namespace std;
int main ()
{
    queue<int>q,copyQ;
    stack<int>st;
    int n;
    cin>>n;
    for(int i= 0; i<n;i++)
    {
        int val;
        cin>>val;
        q.push(val);
    }
      while(!q.empty())
    {
        int aVal = q.front();
        q.pop();
        st.push(aVal);
    }
     while(!st.empty())
    {
        
       int stVal = st.top();
       st.pop();
       copyQ.push(stVal);
    }
    while (!copyQ.empty())
    {
        cout<<copyQ.front()<<" ";
        copyQ.pop();
    }
    
    return 0;
}
