#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define yes    cout << "YES" << '\n';
#define no     cout <<  "NO" << '\n';
typedef vector<int>   vi;
typedef vector<ll>    vll;

void solve() {
    int n, count = 0, x;
    cin >> n >> x;
    vector<int> v(n);
    for (int& k : v) cin >> k;
    multiset <int> st;
    for (int k : v) {
        st.insert(k);
        if (st.size() >= 2) {
            auto first = st.begin();
            auto last = st.end();
            last--;
            if (*last - *first > 2 * x) {
                // for(int p : st) cout << p << " ";
                // cout << endl;
                st.clear();
                count++;
                st.insert(k);
            }
        }
    }
    cout << count << endl;
    //cout << endl;
}

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int tt = 1;
    cin >> tt;
    while (tt--)solve();
}