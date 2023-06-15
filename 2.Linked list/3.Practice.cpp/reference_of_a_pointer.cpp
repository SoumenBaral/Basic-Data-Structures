#include<bits/stdc++.h>
using namespace std;
void fun(int* &a)
{
    *a=NULL;
}
int main ()
{
    int*a= 1;
    fun(a);
    cout<<*a<<endl;
    return 0;
}