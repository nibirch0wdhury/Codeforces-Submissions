#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define yes    cout << "YES" << '\n';
#define no     cout <<  "NO" << '\n';
#define all(v) (v).begin(),(v).end()
typedef vector<int>   vi;
typedef vector<ll>    vll;

void solve(){
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    int f = 0;
    for(int i = 0; i < n;){
        int p = min(i+k, n);
        // cout <<i << "-" << p << endl;
        for(int j = i; j < p; j++){
            if(s[j] == '0') {
                break;
            }
            else if(j == p-1){
                f++;
                // yes;
            }
        }
        i = i+k;
    }
    cout << f << endl;
}

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int tt = 1;
    cin >> tt;
    while(tt--)solve();
}