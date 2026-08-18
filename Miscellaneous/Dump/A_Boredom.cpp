#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int N = 10e5 + 5;
//onst int N = 10;
ll ans = 0;

vector <int> v(N, 0);

void find(int l, int r){
    ll a = 0, b = 0;
    for(int i = l; i <= r; i += 2){
        a += (v[i] * i);
        cout << i << " " << v[i] <<" ";
    }
    cout << '\n';
    for(int i = l+1; i <= r; i += 2){
        b += (v[i] * i);
        cout << i << " " << v[i] <<" ";
    }
    //cout << '\n';
    if(a>=b) ans+= a;
    else ans += b;
    for(int i = l; i <= r; i++){
        //cout << v[i] << " ";
    }
    
}
// 1 2 3 4 5 6 7
//   2 1 1 1

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        v[x]++;
    }
    // 1 2 3
    for(int i = 1; i < N; i++){
        if(v[i] != 0){
            for(int j = i+1; ;j++){
                if(v[j] == 0){
                    find(i, j - 1);
                    i = j + 1;
                    break;
                }
            }
        }
    }
    cout << ans << '\n';
}