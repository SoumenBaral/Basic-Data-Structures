#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int ar[n];
        for (int i = 0; i <n; i++)
        {
            cin>>ar[i];
        }
        map<int,int>mp;
        for (int i = 0; i <n; i++)
        {
            mp[ar[i]]++;
        }
        for (auto it : mp) {
        if (it.second % 2 != 0) {
            cout<<it.first<<endl;
            break;
        }
        
    }

        


    }
    
    return 0;
}