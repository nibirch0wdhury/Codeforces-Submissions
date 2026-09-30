#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define yes    cout << "YES" << '\n';
#define no     cout <<  "NO" << '\n';
#define all(v) (v).begin(),(v).end()
typedef vector<int>   vi;
typedef vector<ll>    vll;

void solve(){
    int n, temp; cin >> n;
    set <int> st;
    for(int i = 0; i < n; i++){
        cin >> temp;
        int value = temp - i;
        st.insert(value);
    }
    int lastseen = -INT_MAX;
    int count = 0, ans = 0;
    for(int k: st){
        if(lastseen + 1 == k){
            count++;
        }
        else count = 0;
        ans = max(ans, count);
        lastseen = k;
    }
    cout << ans+1<< endl;
}

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int tt = 1;
    cin >> tt;
    while(tt--)solve();
}