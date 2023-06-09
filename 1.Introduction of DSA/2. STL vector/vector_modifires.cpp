#include<bits/stdc++.h>
using namespace std;
int main ()
{
    //Type 1 direct assign 
    vector<int>x ={10,20,30,40};
    vector <int>v={1,2,3};
    v=x; // if the 2 vector's size is same complexity will be O(1)
        // if the 2 vector's size is not same complexity will be O(N)
    // x.assign(v);
    v.push_back(50);
    v.pop_back();
    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;
}
