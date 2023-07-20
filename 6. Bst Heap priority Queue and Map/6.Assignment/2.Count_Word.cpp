#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin >>t;
     cin.ignore();
    while (t--)
    {
        string sentence;
        getline(cin,sentence);
        stringstream ss(sentence);
        map<string,int>mp;
        string word;
        int max = 0;
        string max_Word;
        while(ss >> word){
                mp[word]++;
                 if(mp[word]>max){
                
                    max = mp[word];
                    max_Word = word;
                
            }
        }
        cout<<max_Word <<" "<<max<<endl;
    }
    
    return 0;
}