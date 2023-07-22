#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        map<long long int, int> mp;
        long long int maxCount = 0;
        long long int max_MaxNumber;

        for (int i = 0; i < n; i++) {
            long long int x;
            cin >> x;
            mp[x]++;
            if (mp[x] > maxCount || (mp[x] == maxCount && x > max_MaxNumber)) {
                maxCount = mp[x];
                max_MaxNumber = x;
            }
        }
        cout << max_MaxNumber << " " << maxCount << endl;
    }

    return 0;
}
