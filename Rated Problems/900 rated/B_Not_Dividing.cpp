#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define yes    cout << "YES";
#define no     cout << "NO";

void solve(){
    int n; cin >> n;
    vector <int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
        if(v[i] == 1) v[i]++;
    }
    // if(all_of(v.begin(), v.end()-1, [](int a, int b){return (b % a == 0)})){
    //    for(int i = 0; i < n; i++){
    //         cout << v[i] << '\n';
    //    }
    //    return;
    // }
    if(n == 1){
        cout << v[0] << '\n';
        return;
    }
    for(int i = 1; i < n-1; i+=2){
        if(v[i] % v[i-1] == 0){
            v[i]++;
        }
        if(v[i+1] % v[i] == 0){
            v[i+1]++;
        }
    }
    if(v[n-1] % v[n-2] == 0) v[n-1]++;
    for(int vl : v) cout << vl << " ";
    cout << endl;

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