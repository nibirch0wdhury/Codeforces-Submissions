#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define yes    cout << "YES";
#define no     cout << "NO";

void solve(){
    int n, k;
    cin >> n >> k;
    vector <int> arr(n);
    for(int i = 0; i < n; i++) cin >> arr[i];

    sort(arr.begin(), arr.end());
    int maxc = 0, currc = 0;

    for(int i = 0; i < n-1; i++){
        if((arr[i+1] - arr[i]) <= k){
            currc++;
        }
        else{
            //cout << maxc  << " ";
            if(maxc <= currc) maxc = currc + 1;
            currc = 0;
        }
    }
    if(maxc <= currc) maxc = currc + 1;
    cout << n - maxc << '\n';
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