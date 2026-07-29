#include <bits/stdc++.h>
using namespace std;

int main() {
    string s = "1234567890123456789";
    int res = 0;
    int n = s.length();
    for (int i = 0; i < n; i++) {
        for (int len = 1; len <= n - i; len++) {
            string sub = (s.substr(i, len));
            
            // Convert the substring into 
            // integer number
            int x = stoi(sub);
            res += x;
        }
    }
    cout << res;
    return 0;
}