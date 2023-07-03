// Question: Take a stack of size N as input and copy 
// those elements to another stack to get the values in 
// the order they were inserted and print them. You should
//  use STL to solve this problem.
// Sample Input
// 5
// 10 20 30 40 50
// Sample Output
// 10 20 30 40 50

#include<bits/stdc++.h>
using namespace std;
int main ()
{
     stack<int>a,b;
     int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        a.push(x);
    }
    
     while(!a.empty())
    {
        int aVal = a.top();
        a.pop();
        b.push(aVal);
    }
     while(!b.empty())
    {
        
        cout<<b.top()<<" ";
        b.pop();
    }
    return 0;
}