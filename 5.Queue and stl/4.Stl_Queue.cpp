#include<bits/stdc++.h>
using namespace std;
int main ()
{
    queue<int>q;
    int x; 
    cin>>x;
   for(int i = 0 ; i<x;i++)
   {
    int val;
    cin>>val;
    q.push(val);
   }
   cout<<q.size()<<endl;

   while (!q.empty())
   {
        cout<<q.front()<<endl;
        q.pop();

   }
   cout<<q.size();
    

    return 0;
}