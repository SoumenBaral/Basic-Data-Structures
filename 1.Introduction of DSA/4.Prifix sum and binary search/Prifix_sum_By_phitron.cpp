#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n,q;
    cin>>n>>q;
    long long int a[n];
    long long int pxs[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    pxs[0]=a[0];
    for(int i=1; i<n; i++)
    {
       pxs[i]=a[i]+pxs[i-1];
    }

   while (q--)
   {
    int l,r;
    cin>>l>>r;
    l--;
    r--;
    int sum;
    if(l==0)sum = pxs[r];
    else sum= pxs[r]-pxs[l-1];
    cout<<sum<<endl;

    
   }
 
   

    for(int i =0; i<q; i++)
    {
        long long int l,r;
        long long int s= 0;
        cin>>l>>r;
        if(l-1<=0){
            s = pxs[r-1];
        }
        else{
            s= pxs[r-1]-pxs[l-2];
        }
        // cout<<s <<endl;
    }
    return 0;
}