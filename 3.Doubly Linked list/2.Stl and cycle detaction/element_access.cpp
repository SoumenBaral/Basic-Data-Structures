#include<bits/stdc++.h>
using namespace std;
int main ()
{
    list<int>myList = {20 ,12,3,14,33,5,666,54,21,25,32};
    cout<<myList.back()<<endl;
    cout<<myList.front()<<endl;
    cout<<*next(myList.begin(),10);

    return 0;
}