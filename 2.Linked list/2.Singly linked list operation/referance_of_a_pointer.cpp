#include<bits/stdc++.h>
using namespace std;
void fun(int* &p)
{
    p=NULL;
}
int main ()
{
    int val=10;
    int* ptr =&val;
    cout<<val<<endl;

    fun(ptr);
    cout<<ptr<<endl;
    return 0;
}