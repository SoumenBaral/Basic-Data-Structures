#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i <n; i++)
    {
        cin>>a[i];
    }
    bool flag = false;
    for (int i = 0; i < n-1; i++)
    {
      for(int j= i+1;j<n;j++)
      {
        if(a[i]==a[j])
        {
            flag=true;
            break;
        }
      }
     

    }
    if(flag==true)cout<<"YES";
    else cout<<"NO";
    

    return 0;
}