#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];                          //complexity O(n);
    }
    int s =0;
    for (int i = 0; i < n; i++)
    {
        s+=a[i];
    }
    cout<<s;
    
    
    return 0;
}