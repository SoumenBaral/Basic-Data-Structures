#include<bits/stdc++.h>
using namespace std;
int main ()
{
    list<int>myList ={20,10,30,50,10,40,10,60};
    // myList.remove(10); //IT will delete all of the value that you want to delete ..
    // myList.sort();//what a easy sort man .. complexity N(LogN)
    myList.sort(greater<int>());//descending order complexity N(logN)
    myList.unique();
    myList.reverse();
    for(int val: myList){
        cout<<val<<" ";
    }
    return 0;
}