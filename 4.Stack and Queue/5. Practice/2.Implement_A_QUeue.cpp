#include<bits/stdc++.h>
using namespace std;
class Queue {
public:
    Queue() {
        // Implement the Constructor
    }

    /*----------------- Public Functions of Queue -----------------*/
    queue<int> q;


    bool isEmpty() {
        // Implement the isEmpty() function
        if(q.empty())return true;
        else return false;
    }

    void enqueue(int data) {
        // Implement the enqueue() function
        q.push(data);
    }

    int dequeue() {
        // Implement the dequeue() function
        if(isEmpty()) return -1;
        int x = q.front();
        q.pop();
        return x;
    }

    int front() {
        // Implement the front() function
         if(isEmpty()) return -1;
        return q.front();
    }
};
int main ()
{
    
    return 0;
}