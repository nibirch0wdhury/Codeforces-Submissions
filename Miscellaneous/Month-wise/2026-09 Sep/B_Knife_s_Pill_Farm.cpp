#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define yes    cout << "YES" << '\n';
#define no     cout <<  "NO" << '\n';
#define all(v) (v).begin(),(v).end()
typedef vector<int>   vi;
typedef vector<ll>    vll;

// 1
// 4 3
// -5 -5 1 2

void solve() {
    int n, m; cin >> n >> m;
    vector <int> v(n);
    for (int& k : v) cin >> k;

    int last = max_element((v.begin() + m - 1), v.end()) - v.begin();
    for(int i = last; i < n; i++){
        if(v[i] == v[last]) last = i;
    }

    multimap <int, int> mp;
    for (int i = 0; i < last; i++) {
        mp.insert({ v[i], i });
    }

    map <int, int> mp2;
    int j = 0;
    for (auto k : mp) {
        if (j < m-1) {
            mp2.insert({ k.second, k.first });
            j++;
        }
        else break;
    }
    // for (auto k : mp2){
    //     cout << k.first  << " " << k.second<< endl;
    // }
    long long ans = 0;
    int s = 1, prev = 0;
    for (auto k : mp2) {
        ans += (k.second - prev) * s;
        prev = k.second;
        s++;
    }
    ans += (v[last] - prev) * m;
    cout << ans << endl;

}

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int tt = 1;
    cin >> tt;
    while (tt--)solve();
}