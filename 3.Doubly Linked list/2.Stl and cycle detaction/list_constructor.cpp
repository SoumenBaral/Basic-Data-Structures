#include<bits/stdc++.h>
using namespace std;
int main ()
{
    // list<int>myList;
    // list<int>myList(10);
    // list<int>myList(3,100);
    // list<int>List2 = {1,2,3,4,5};
    // list<int>myList(ar,ar+5);
    int ar[5]={10,20,30,40,50};
    vector<int>v={10,20,30,40,50,60,70};
    list<int>myList(v.begin(),v.end());

    // cout<<myList.size()<<endl;
    // cout<<myList.front()<<endl;
    // for(auto it = myList.begin() ; it!=myList.end(); it++)
    // {
    //     cout<<*it<<" ";
    // }
    //shortCurt for loop........
    for(int val:myList)
    {
        cout<<val<<endl;
    }
    return 0;
}