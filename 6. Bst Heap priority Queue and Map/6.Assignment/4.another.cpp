#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;

    vector<int> v(N);
    for (int i = 0; i < N; ++i)
    {
        cin >> v[i];
    }

    priority_queue<int, vector<int>, greater<int>> pq;
    for (int val : v)
    {
        pq.push(val);
    }

    int T;
    cin >> T;

    while (T--)
    {
        int command;
        cin >> command;

        if (command == 0)
        {
            int X;
            cin >> X;
            pq.push(X);
            cout << pq.top() << endl;
        }
        else if (command == 1)
        {
            if (!pq.empty())
            {
                cout << pq.top() << endl;
            }
            else
            {
                cout << "Empty" << endl;
            }
        }
        else if (command == 2)
        {
            if (!pq.empty())
            {
                pq.pop();
                if (!pq.empty())
                {
                    cout << pq.top() << endl;
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