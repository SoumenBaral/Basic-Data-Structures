#include<bits/stdc++.h>
using namespace std;
queue<int> reverseElements(queue<int> qs, int k)
{
    // Write your code here.
    stack<int>s;
    queue<int>q;
    // for(int i= 0; i<k;i++){

    // }
    for(int i=0; i<k;i++){
        // if(x==k)break;
        int sVal = qs.front();
        qs.pop();
        s.push(sVal);
    }
    while(!s.empty()){
        int qval = s.top();
        s.pop();
        q.push(qval);

    }

    while(!qs.empty()){
        q.push(qs.front());
        qs.pop();
    }
    return q;

}

int main ()
{
    
    return 0;
}