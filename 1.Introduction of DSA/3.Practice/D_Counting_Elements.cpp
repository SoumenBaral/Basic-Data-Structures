#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    int count =0;

    for(int i=0; i<n;i++)
    {
        int x= v[i]+1;
       for (int j = i+1; i < n; j++)
       {
         if(v[j]==x)
        {
            count++;
        }
       }
       
    }
    cout<<count;
    return 0;
}