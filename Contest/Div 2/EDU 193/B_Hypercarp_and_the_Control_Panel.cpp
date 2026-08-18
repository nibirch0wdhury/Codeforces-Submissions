#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define yes    cout << "YES" << '\n';
#define no     cout <<  "NO" << '\n';
typedef vector<int>   vi;
typedef vector<ll>    vll;

void solve() {
    int n; cin >> n;
    vector <int> v(n), a, b;
    vector <int> s;
    for (int i = 0; i < n; i++)cin >> v[i];
    s.push_back(v[0]);
    for (int i = 1; i < n;) {
        if (v[i] == s.back()) {
            s.push_back(v[i]);
            for (;i < n; i++) {
                if (v[i] == s.back())continue;
                else break;
            }
        }
        else {
            s.push_back(v[i]);
            i++;
        }
    }
    a.push_back(s[0]);
    b.push_back(1);
    for (int i = 1; i < s.size(); i++) {
        if (s[i] == a.back()) b.back()++;
        else {
            a.push_back(s[i]);
            b.push_back(1);
        }
    }
    if(b.size() == 1){
        cout << b.size() << endl;
        return;
    }
    for (int i = 0; i + 1< b.size(); i++) {
        if (b[i] == b[i + 1] && b[i] == 2) {
            cout << b.size() + 2 << endl;
            return;
        }
        
    }
    // cout << endl;
    // for(int k : a) cout << k << " ";
    // cout << endl;
    // for(int k : b) cout << k << " ";
    // cout << endl;
    // last e 2 1 or first e 1 2 thakle ans = b+1
    if(b[0] == 1 && b[1] == 2){
        cout << b.size() + 1 << endl;
        return;
    }
    if(b[b.size() - 1] == 1 && b[b.size() - 2] == 2){
        cout << b.size() + 1 << endl;
        return;
    }
    for(int i = 0; i+2 < b.size(); i++){
        if(b[i] == 2 && a[i] != a[i+2]){
            cout << b.size() + 1 << endl;
            return;
        }
    }
    for(int i = 2; i < b.size(); i++){
        if(b[i] == 2 && a[i] != a[i-2]){
            cout << b.size() + 1 << endl;
            return;
        }
    }
    cout << b.size() << endl;
    
}

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int tt = 1;
    cin >> tt;
    while (tt--)solve();
}