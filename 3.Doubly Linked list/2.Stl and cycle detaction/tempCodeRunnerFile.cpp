#include<bits/stdc++.h>
using namespace std;
int main ()
{
    list<int>myList = {10,20,30};
    // cout<<myList.max_size();
    // myList.clear();
    myList.resize(2);
    cout<<myList.size();

    for(int val: myList)
    {
        cout<<val<<endl;
    }
    return 0;
}