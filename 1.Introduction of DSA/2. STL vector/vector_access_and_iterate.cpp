#include<bits/stdc++.h>
using namespace std;
int main ()
{
    vector<int>v={2,2,34,54,32,12,12};
    // vector<int>::iterator it;
    for(auto it=v.begin();it<v.end();it++)
    {
        cout<<*it<<" ";
    }
    // cout<<v[v.size()-3];
    // cout<<v.front();
    // cout<<v.back();
    return 0;
}