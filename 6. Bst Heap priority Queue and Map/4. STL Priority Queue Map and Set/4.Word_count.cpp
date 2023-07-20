#include<bits/stdc++.h>
using namespace std;
int main ()
{
    string sentence;
    getline(cin,sentence);
    stringstream ss(sentence);
    map<string,int>mp;
    string word;
    while(ss >> word){
            mp[word]++;
    }
     for(auto it = mp.begin(); it!=mp.end(); it++){
        cout<<it->first <<" "<<it->second <<endl;
    }
    return 0;
}