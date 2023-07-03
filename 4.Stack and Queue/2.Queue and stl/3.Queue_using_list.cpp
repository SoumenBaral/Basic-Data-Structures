#include<bits/stdc++.h>
using namespace std;

class MyQueue
{
    list<int>l;
    public:
       

        void Push(int val)
        {
           l.push_back(val);

        }
        void POP(){
           l.pop_front();
        }

    int front()
    {
        return l.front();
    }
    int size()
    {
        return l.size();
    }
    bool empty()
    {
      return l.empty();
    }
};
int main ()
{
     MyQueue q;
     queue <int> q;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        q.Push(x);
    }
    while (!q.empty())
    {
        cout << q.front() << endl;
        q.POP();
    }
    return 0;
}