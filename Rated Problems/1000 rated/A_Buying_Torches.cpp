#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define yes    cout << "YES" << '\n';
#define no     cout <<  "NO" << '\n';
#define all(v) (v).begin(),(v).end()
typedef vector<int>   vi;
typedef vector<ll>    vll;

void solve(){
    int x, y, k;
    cin >> x >> y >> k;
    double ans =  y*k + (k-1);
    ans = ceil (ans/(x-1));
    cout << fixed << setprecision(0);
    cout << ans + k<< endl;
}

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int tt = 1;
    cin >> tt;
    while(tt--)solve();
}