#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define yes    cout << "YES" << '\n';
#define no     cout <<  "NO" << '\n';
typedef vector<int>   vi;
typedef vector<ll>    vll;

void solve() {
    int n; cin >> n;
    int array[n][2];
    ll sum_second = 0;
    int smallest_first = INT_MAX;
    int smallest_second = INT_MAX;
    for(int i = 0; i < n; i++){
        int m, temp; cin >> m;
        multiset<int> given;
        for(int j = 0; j < m; j++) {
            cin >> temp;
            given.insert(temp);
        }
        auto it = given.begin();
        int first = *it;
        it++;
        int second = *it;
        array[i][0] = first;
        array[i][1] = second;
        sum_second += second;
        smallest_second = min(smallest_second, second);
        smallest_first = min(smallest_first, first);
    }
    cout << sum_second + smallest_first - smallest_second << endl;
}

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int tt = 1;
    cin >> tt;
    while (tt--)solve();
}