#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define yes    cout << "YES" << '\n';
#define no     cout <<  "NO" << '\n';
#define all(v) (v).begin(),(v).end()
typedef vector<int>   vi;
typedef vector<ll>    vll;

void solve(){
    int n, k, m;
    cin >> n >> k >> m;
    vector <int> ans;
    if(k> m){
        no; return;
    }
    else{
        yes;
        for(int i = 0; i < k-1; i++){
            ans.push_back(1);
        }
        int last = m-(k-1);
        ans.push_back(last);
        for(int i = 0; i < n - k; i++){
            ans.push_back(ans[i%k]);
        }
        for(auto p: ans)cout << p << " ";
        cout << endl;
    }
}

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int tt = 1;
    cin >> tt;
    while(tt--)solve();
}