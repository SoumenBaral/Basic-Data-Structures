#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int N;
    cin >> N;

    vector<int> v(N);
    for (int i = 0; i < N; ++i)
    {
        cin >> v[i];
    }
    set<int>s;
   for (int val : v)
    {
        s.insert(val);
    }

    int T;
    cin >> T;
    while (T--)
    {
    int val;
    cin>>val;
    if(val == 0){
        int x;
        cin>>x;
        s.insert(x);
         if(!s.empty()){
        cout<<*s.begin()<<endl;

         }
         else 
        {
            cout << "Empty" << endl;
        }
    }
    else if(val == 1){
       if(!s.empty()){
         cout<<*s.begin()<<endl;
       }
        else 
        {
            cout << "Empty" << endl;
        }
    }
    else if(val == 2){
        auto min = s.begin();
        s.erase(min);
        
        if(!s.empty()){
         cout<<*s.begin()<<endl;
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
    return 0;
}