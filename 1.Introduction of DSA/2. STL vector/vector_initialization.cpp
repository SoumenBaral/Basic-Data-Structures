#include<bits/stdc++.h>
using namespace std;
int main ()
{
    // vector<int>v; type 1.
    // vector<int>v(8); ---->type 2.
    // vector <int> v(5,34); ---->type 3.
    // vector<int> v2(10,23);
                            // -----> type 4.
    // vector<int>v(v2);
    // int n;
    // cin>>n;
    // int a[n];
    // for (int i = 0; i <n; i++) //=====>type 5.
    // {                               
    //     cin>>a[i];
    // }
    
    // vector<int>v(a,a+n);

    vector<int>v={12,23,45,64,32}; //direct initialization;
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    cout<<v.size();
    return 0;
}