#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int Count = 0;

        for(char i=0;i<s.size();i++){
           if(i%2==0){
            //  cout<<s[i]<<" ";
             if(s[i]=='1')Count++;
           }
            
        }
        cout <<Count<<endl;
    }
    return 0;
}