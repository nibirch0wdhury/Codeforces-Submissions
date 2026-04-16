#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, t;
    cin >> n >> t;

    vector<ll> a(n+1);
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        a[i] += a[i-1];  // prefix sum
    }

    int ans = 0;
    int left = 0;

    for (int right = 1; right <= n; right++) {
        while (a[right] - a[left] > t) {
            left++;
        }
        ans = max(ans, right - left);
    }

    cout << ans << '\n';
    return 0;
}
