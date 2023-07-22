#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        vector<long long int> v;
        int n;
        cin >> n;
        while (n--) {
           long long  int x;
            cin >> x;
            v.push_back(x);
        }

        map<long long int, int> mp;
        int maxCount = 0;
       long long int max_MaxNumber;

        for (long long int num : v) {
            mp[num]++;
           
        }
         for(auto it = mp.begin(); it!=mp.end(); it++){
           long long int number = it->first;
            int count =  it->second;
        if (count > maxCount || (count == maxCount && number > max_MaxNumber)) {
                maxCount = count;
                max_MaxNumber = number;
            }
    }
        cout << max_MaxNumber << " " << maxCount << endl;
    }

    return 0;
}
