#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve(){
    int n;
    cin >> n;
    vector <int> v(n);
    for(int i =0;i < n; i++){
        cin >> v[i];
    }
    int count = 0;
    for(int i = 0;i < n-1; i++){
        for(int j = i+1;j < n; j++){
            if(v[j] != -1 && v[i] > v[j]){
                v[j] = -1;
                count++;
            }
        }
    }
    cout << count <<  '\n';
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