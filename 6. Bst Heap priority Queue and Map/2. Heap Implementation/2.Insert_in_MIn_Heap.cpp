#include<bits/stdc++.h>
using namespace std;
int main ()
{
vector<int> v;
   int n;
   cin>>n;
   for(int i= 0; i<n; i++){
        int x;
        cin>>x;
        v.push_back(x);
        int current_Index = v.size()-1;
        while (current_Index!=0)
        {
            int Parent_Index = (current_Index-1)/2;
            if(v[Parent_Index]>v[current_Index]){
                swap(v[Parent_Index],v[current_Index]);
            }
            else break;
            current_Index = Parent_Index;
        }
   }
    
    for(int value : v){
        cout<<value<<" ";
    }
    return 0;
}