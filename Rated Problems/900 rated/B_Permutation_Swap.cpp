#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define yes    cout << "YES";
#define no     cout << "NO";

void solve(){
    int n;
    cin >> n;
    int g = 0;
    vector <int> v(n);
    for(int i = 0; i < n; i++)
        cin >> v[i];
    for(int i = 0; i < n; i++){
        int a = abs(i+1 - v[i]);
        g = __gcd(g, a);
    }
    cout << g << endl;
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