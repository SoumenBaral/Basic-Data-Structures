#include<bits/stdc++.h>
using namespace std;
int main ()
{
    vector<int>v ={12,32,35,87,90};
    vector<int>v2={109,89,76,98,40};
    // v.insert(v.begin()+2,5,1233); //if we want to insert single value ;
    v.insert(v.begin()+3,v2.begin(),v2.end());//if we insert  a vector in another vector then we have to first we set the index number v.begin+k  k is index number of the main vector ..
    
    for(int x: v)
    {
        cout<<x<<" ";
    }
    return 0;
}