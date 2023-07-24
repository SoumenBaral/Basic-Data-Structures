#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int roll;
    int marks;
    Student(string name, int roll, int marks)
    {
        this->marks = marks;
        this->roll = roll;
        this->name = name;
    }
};
class cmp{
    public:
    bool operator()(Student a, Student b){
        if(a.marks == b.marks) 
            return a.roll > b.roll;
        else 
            return a.marks < b.marks;
    } 
};

int main()
{
    priority_queue<Student, vector<Student>, cmp> pq;
    int n;
    cin >> n;
    
    for (int i = 0; i < n; i++)
    {
        string name;
        int roll, marks;
        cin >> name >> roll >> marks;
        Student obj(name, roll, marks);
        pq.push(obj);
    }
    int T;
    cin >> T;
    while (T--)
    {
        int val;
        cin >> val;
        if (val == 0)
        {
            string name;
            int roll, marks;
            cin >> name >> roll >> marks;
            Student obj(name, roll, marks);
            pq.push(obj);
            cout << pq.top().name <<" "<< pq.top().roll <<" "<<pq.top().marks << endl;
        }
        else if (val == 1)
        {
            if (!pq.empty())
            {
               cout << pq.top().name <<" "<< pq.top().roll <<" "<<pq.top().marks << endl;
            }
            else
            {
                cout << "Empty" << endl;
            }
        }
        else if (val == 2)
        {
            if (!pq.empty())
            {
                pq.pop();
                if (!pq.empty())
                {
                    cout << pq.top().name <<" "<< pq.top().roll <<" "<<pq.top().marks << endl;
                }
                else
                {
                    cout << "Empty" << endl;
                }
            }
            else
                {
                    cout << "Empty" << endl;
                }
           
        }
    }
    return 0;
}