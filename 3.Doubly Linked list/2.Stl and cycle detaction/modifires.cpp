#include<bits/stdc++.h>
using namespace std;
int main ()
{
    list<int>myList={10,20,30,40,50};
    // list<int>newList;
    // // myList = list1;
    // newList.assign(list1.begin(),list1.end());

    
    //Insert at head;
    myList.push_front(7);
    //inert at tail;
    myList.push_back(666);
    //delete from tail;
    myList.pop_back();
    //delete from head;
    myList.pop_front();

    //insert_at_any_position;
    myList.insert(next(myList.begin(),0),199);

    for(int val: myList)
    {
        cout<<val<<" ";

    }
    return 0;
}