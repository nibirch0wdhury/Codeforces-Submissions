#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define yes    cout << "YES" << '\n';
#define no     cout <<  "NO" << '\n';
#define all(v) (v).begin(),(v).end()
typedef vector<int>   vi;
typedef vector<ll>    vll;

void solve(){
    int n; cin>>n;
    string a; cin >> a;
    vector <char> v;
    vector <int> fq;
    v.push_back(a[0]);
    fq.push_back(1);
    for(int i = 1; i < n; i++){
        if(v.back() == a[i])fq.back()++;
        else{
            v.push_back(a[i]);
            fq.push_back(1);
        }
    }
    int m1 = 0;
    int m0 = 0;
    for(int i = 0; i < v.size(); i++){
        if(v[i] == '1' && fq[i] > 1) m1 += (fq[i]-1);
        else if(v[i] == '0' && fq[i] > 1) m0 += (fq[i]-1);
    }
    // cout << m1 << m0;
    int l = m1 + m0;
    if(abs(m1-m0) < 2){
        cout << l << endl;
        return;
    }
    if(abs(m1-m0) == 2){
        if((m1 > m0 && (v.front() == '0' || v.back() == '0')) || (m1 < m0 && (v.front() == '1' || v.back() == '1'))) {
            cout << l + 1 << endl;
            return;
        }
    }
    if(abs(m1-m0) == 3){
        if((m1 > m0 && (v.front() == '0' && v.back() == '0')) || (m1 < m0 && (v.front() == '1' && v.back() == '1'))){
            cout << l + 2 << endl;
            return;
        }
    }
    cout << -1 << endl;
}

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int tt = 1;
    cin >> tt;
    while(tt--)solve();
}