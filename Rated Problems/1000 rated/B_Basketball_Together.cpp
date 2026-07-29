#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define yes    cout << "YES" << '\n';
#define no     cout <<  "NO" << '\n';
typedef vector<int>   vi;
typedef vector<ll>    vll;

void solve(){
    ll n, d, temp, count = 0; cin >> n >> d;
    multiset <int> s;
    for(int i = 0; i < n; i++){
        cin >> temp; s.insert(temp);
    }
    //cout << s.size();
    while(s.size() > 0){
        auto big = s.end(); big--;
        ll mari_felo = ceil(d/ *big);
        //cout << mari_felo << " " << s.size() << endl;
        if(s.size() > mari_felo){
            count++;
            //cout << s.size() << endl;
            for(int i = 1; i <= mari_felo; i++){
                //cout << i << "-" << mari_felo << endl;
                s.erase(s.begin());
                //cout << s.size() << endl;
            }
            s.erase(big);
        }
        else break;
    }
    cout << count << endl;
}

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int tt = 1;
    //cin >> tt;
    while(tt--)solve();
}