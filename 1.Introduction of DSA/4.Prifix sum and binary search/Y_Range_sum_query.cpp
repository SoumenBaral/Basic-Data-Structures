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
    long long int sum = 0;
    for(int i; i<n; i++)
    {
        sum+=a[i];
        pxs[i]=sum;
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
        cout<<s <<endl;
    }
    return 0;
}