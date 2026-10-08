#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define yes    cout << "YES" << '\n';
#define no     cout <<  "NO" << '\n';
#define all(v) (v).begin(),(v).end()
typedef vector<int>   vi;
typedef vector<ll>    vll;

void solve(){
    int n; string s;
    cin >> n >> s;
    stack <int> st;
    vector <int> a(n, 0);
    for(int i = 0; i < n; i++){
        if(s[i] == '3') a[i] = 1;
        else if(s[i] == '2' && st.size() != 0){
            int k = st.top();
            st.pop();
            a[k] = 1;
        }
        else if(s[i] == '2' && st.size() == 0){
            a[i] = 1;
        }
        else if(s[i] == '1'){
            st.push(i);
        }
        // cout << last << endl;
    }

    // for(int k: a){
    //     cout << k << " ";
    // }
    // cout << endl;



    cout << count(all(a), 0) << endl;
    if(count(all(a), 0) == 0) cout << endl;
    for(int i = 0; i < n; i++){
        if(a[i] == 0){
            cout << i+1 << " ";
        }
    }
    cout << endl;
}

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int tt = 1;
    cin >> tt;
    while(tt--)solve();
}