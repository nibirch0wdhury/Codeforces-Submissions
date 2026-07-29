#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define yes    cout << "YES";
#define no     cout << "NO";

void solve(){
    int n; cin >> n;
    vector <int> a(n+1);
    a[0] = -1;
    for(int i = 1; i <= n; i++)cin >> a[i];

    for(int i = 1; i <= n; i++){
        if(a[i] != i){
            int j = i;
            while(j <= n && j*2 <= n && a[j] != i){
                j = j*2;
            }
            if(a[j] != i){
                j = i;
                while(j >= 1 && a[j] != i && j%2 == 0){
                    j = j/2;
                    //cout << j << endl;
                }
            }
            if(a[j] != i){
                cout << "NO" << endl;
                return;
            }
        }
    }
    cout << "YES" << endl;
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