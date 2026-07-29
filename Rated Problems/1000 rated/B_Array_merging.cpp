#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define yes    cout << "YES" << '\n';
#define no     cout <<  "NO" << '\n';
typedef vector<int>   vi;
typedef vector<ll>    vll;

void solve() {
    int n;
    cin >> n;
    map <int, int> m1;
    map <int, int> m2;
    int curnum = -1;
    int temp;
    int count = 0;

    for (int i = 0; i < n; i++) {
        cin >> temp;
        //cout << curnum << " _ " << temp << endl;
        if (curnum == -1) {
            curnum = temp;
            count++;
        }
        else if (curnum != temp) {
            if (m1.find(curnum) != m1.end())m1[curnum] = max(m1[curnum], count);
            else m1.insert({ curnum, count });
            count = 1;
            curnum = temp;
        }
        else {
            curnum = temp;
            count++;
        }
    }
    if (m1.find(curnum) != m1.end())m1[curnum] = max(m1[curnum], count);
    else m1.insert({ curnum, count });
    count = 0;
    curnum = -1;

    for (int i = 0; i < n; i++) {
        cin >> temp;
        if (curnum == -1) {
            curnum = temp;
            count++;
        }
        else if (curnum != temp) {
            if (m2.find(curnum) != m2.end())m2[curnum] = max(m2[curnum], count);
            else m2.insert({ curnum, count });
            count = 1;
            curnum = temp;
        }
        else {
            curnum = temp;
            count++;
        }
    }
    if (m2.find(curnum) != m2.end())m2[curnum] = max(m2[curnum], count);
    else m2.insert({ curnum, count });
    int mx = -1;
    for (auto it : m1) {
        if (m2.find(it.first) != m2.end()) {
            auto kala = m2.find(it.first);
            int total2 = it.second + kala->second;
            mx = max(mx, total2);
        }else{
            mx = max(mx, it.second);
        }
    }
    for (auto it : m2) {
        mx = max(mx, it.second);
    }
    cout << mx << endl;


    // for (auto it : m1) cout << it.first << " " << it.second << endl;
    // cout << "---------" << endl;
    // for (auto it : m2) cout << it.first << " " << it.second << endl;
    // cout << endl;
}

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int tt = 1;
    cin >> tt;
    while (tt--)solve();
}