#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve(){
    int n,k;
    cin >> n >> k;
    int isSorted = 0;
    vector <int> a(n);
    for(int i = 0; i < n; i++)
        cin >> a[i];

    if(k>= 2)
        cout << "YES" << '\n';
    else{
        for(int i = 0; i < n-1; i++)
            if(a[i]>a[i+1]) isSorted = -1;

        if(isSorted == 0) cout << "YES" << '\n';
        else cout << "NO" << '\n';
    }
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