#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin>>t;
    while (t--)
    {
        vector<int>v;
    vector<int>s;
    int x;
    cin>>x;
    while (x--)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    while (!v.empty())
    {
        int x = v.back();
        v.pop_back();
        if(x!=v.back()){
            s.push_back(x);
        }

    }
    sort(s.begin(),s.end());
     while (!s.empty())
    {
        int x = s.back();
        s.pop_back();
       cout<<x<<" ";
    }
    cout<<endl;
    }
    
    return 0;
}