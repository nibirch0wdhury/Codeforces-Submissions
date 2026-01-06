#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve(){
    int n;
    cin >> n;
    vector <int> v(n);
    vector <int> di;
    for(int i = 0; i < n; i++){
        cin << v[i];
    }
    for(int i = 0; i < n - 1; i++){
        int a = abs(v[i] - v[i+1]);
        di.push_back(a);
    }
    for(int a : di){
        cout << a << " ";
    }
    cout << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin >> tt;
    while(tt--){
        solve();
    }
}