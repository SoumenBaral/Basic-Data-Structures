#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string s;
    while (getline(cin, s)) {
         s.erase(remove(s.begin(), s.end(), ' '), s.end());
        if (!s.empty() && s.back() == '\n') {
            s.pop_back();
        }
        sort(s.begin(), s.end());
        cout << s << endl;
    }

    return 0;
}
