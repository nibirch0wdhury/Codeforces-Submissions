#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int N = 1e6 + 10;
vector <int> a;
vector <ll> ae;
vector <ll> ad;

void solve(){
    int aa, bb;
    cin >> aa >> bb;
    int b = max(aa,bb);
    int s = min(aa,bb);
    for(int i = a.size() - 1; i > 0; i--){
        int mx = max(ae[i], ad[i]);
        int mn = min(ae[i], ad[i]);
        if(mx <= b && mn <= s){
            cout << i << '\n';
            return;
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    a.push_back(1);
    for(int i = 1; i == 0 || a[i-1] < N; i++){
        int x = a[i-1]*2;
        a.push_back(x);
        //cout << x << '\n';
    }
    for(int i = 0; i < a.size(); i++){
        long long even = 0;
        long long odd = 0;
        for(int j = 0; j < i; j++){
            if(j%2 == 0) even += a[j];
            else odd += a[j];
        }
        ae.push_back(even);
        ad.push_back(odd);
    }
    // for(int i = 0; i < ae.size(); i++){
    //     cout << ae[i] << " ";
    // }
    int tt = 1;
    cin >> tt;
    while(tt--){
        solve();
    }
}