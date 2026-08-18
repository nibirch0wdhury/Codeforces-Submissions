#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define yes    cout << "YES" << '\n';
#define no     cout <<  "NO" << '\n';
typedef vector<int>   vi;
typedef vector<ll>    vll;

void solve(){
    int n, x; cin >> n;
    vector <int> one(n+1);
    vector <int> two(n+1);
    vector <int> three(n+1);
    for(int i = 1; i <= n; i++){
        int x; cin >> x;
        if(x == 1) one[i] = 1;
        if(x == 2) two[i] = 1;
        if(x == 3) three[i] = 1;

        one[i] += one[i-1];
        two[i] += two[i-1];
        three[i] += three[i-1];
    }
    for(int k : one) cout << k << " ";
    cout << endl;
    for(int k : two) cout << k << " ";
    cout << endl;
    for(int k : three) cout << k << " ";
    cout << endl;
    int c1 = -1;
    for(int i = 1; i < n - 1; i++){
        // cout << one[i] << "--" << two[i] + three[i] << endl;
        if(one[i] >= two[i] + three[i]){
            c1 = i;
            break;
        }
    }
    cout << c1 << "---" << endl;
    if(c1 == -1){
        no;return;
    }
    for(int i = c1+1; i < n; i++){
        int onetwo = one[i] + two[i] - one[c1] - two[c1];
        int tr = three[i] - three[c1];
        if(onetwo >= tr){
            yes; return;
        }
        if(i == n-1){
            no;return;
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int tt = 1;
    cin >> tt;
    while(tt--)solve();
}