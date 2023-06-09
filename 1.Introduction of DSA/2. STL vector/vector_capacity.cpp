#include<bits/stdc++.h>
using namespace std;
int main ()
{
    vector<int>v;
    // cout<<v.max_size()<<endl;
    // cout<<v.capacity()<<endl;
    v.push_back(23);
    // cout<<v.capacity()<<endl;
    v.push_back(32);
    // cout<<v.capacity()<<endl;
     v.push_back(23);
    // cout<<v.capacity()<<endl;
    v.push_back(32);
    // cout<<v.capacity()<<endl;
     v.push_back(23);
    // cout<<v.capacity()<<endl;
    v.push_back(32);
    // cout<<v.capacity()<<endl;
//     v.clear();
//     cout<<v.size()<<endl;
//      for (int i = 0; i <v.size(); i++)
//    {
//     cout<<v[i]<<" ";
//    }
//    cout<<v[4]; // clear function  just delete the size of the vector they don't delete the value of it we can access the value of the vector after clear it .

// if(v.empty())cout<< "The vector is empty"<<endl;
// else cout<<"The vector size is "<<v.size()<<endl;
v.resize(2);
v.resize(7,100);
     for (int i = 0; i <v.size(); i++)
   {
    cout<<v[i]<<" ";
   }

    return 0;
}