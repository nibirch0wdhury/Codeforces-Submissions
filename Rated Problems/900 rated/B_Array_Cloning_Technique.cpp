#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define yes    cout << "YES";
#define no     cout << "NO";

void solve(){
    int n, a, max = 0;
    cin >> n;
    unordered_map <int, int> map;
    for(int i = 0; i < n; i++){
        cin >> a;
        map[a]++;
    }
    for(auto &b : map){
        if(b.second > max){
            max = b.second;
        }
    }
    if(max == n){
        cout << "0" << '\n';
        return;
    }
    int need_fill = n - max;
    int count = need_fill;
    while(n > max){
        max = max*2;
        count++;
    }
    cout << count << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int tt = 1;
    cin >> tt;
    while(tt--){
        solve();
    }
}