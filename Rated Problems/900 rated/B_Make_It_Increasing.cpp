#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define yes    cout << "YES";
#define no     cout << "NO";

void solve(){
    int n;
    cin >> n;
    vector <int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    int c = 0;
    for(int i = n-1; i > 0; i--){
        if(v[i] == 0 && i!= 0){
            cout << "-1" << '\n';
            return;
        }
        if(v[i-1] >= v[i]){
            while(v[i-1] >= v[i]){
                v[i-1] = v[i-1]/2;
                c++;
                if(v[i-1] == 0 && i!= 1){
                    cout << "-1" << '\n';
                    return;
                }
            }
        }
    }
    cout << c << '\n';
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