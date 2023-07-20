#include<bits/stdc++.h>
using namespace std;
int main ()
{
    map<string,int>mp;
    mp["Shakib all Hassan"] = 76;
    mp["Ali Bordi Kha "] = 20;
    mp["Tamim "] = 100;
    
    for(auto it = mp.begin(); it!=mp.end(); it++){
        cout<<it->first <<" "<<it->second <<endl;
    }
    
    return 0;
}