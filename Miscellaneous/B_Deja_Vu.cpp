#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve(){
    int n, q;
    cin >> n >> q;
    vector <int> a;
    for(int i = 0; i < n; i++){
        int ttt; 
        cin >> ttt;
        a.push_back(ttt);
    }
    vector <int> s(31, 0);
    for(int i = 0; i < q; i++){
        int kk;
        cin >> kk;
        s[kk-1]++;
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < 30; j++){
            if(s[j] > 0){
                int div = (pow(2, (j+1)));
                cout << div << " ";
                if(a[i] % div == 0){
                    int keno = pow(2, j);
                    //cout << a[i] << " ";
                    a[i] += pow(keno, s[j]);
                    //cout <<s[j] << "  " <<  i <<"-"<<keno << "--"<<  j << " " << div <<"-------" << a[i] << '\n';
                }
            }
        }
    }
    for(int it : a) cout << it << " ";
    cout << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin >> tt;
    while(tt--){
        solve();
    }
}