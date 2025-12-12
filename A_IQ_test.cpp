#include <bits/stdc++.h>
using namespace std;

using ll = long long;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    int ec = 0, oc = 0, ei, oi;
    int a[n+1];
    for(int i = 1; i <= n; i++){
        cin >> a[i];
        if(a[i]%2 == 0){
            ec++;
            ei = i;
        }
        else{
            oc++;
            oi = i;
        }
    }
    if(ec == 1) cout << ei << '\n';
    else cout << oi << '\n';

}