#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main(){
    int n, l;
    cin >> n >> l;
    vector <int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    //for(int k : v) cout << k << '\n';
    double m = -9999;
    for(int i = 1; i < v.size(); i++){
        if((v[i] - v[i-1]) > m){
            m = (v[i] - v[i-1]);
            //cout << fixed << setprecision(10) << m << " "<< i<< '\n';
        }
    }
    m = m/2;
    if(v[0] != 0) {
        m = max(m, (double)v[0]);
    }
    if((double)v[n-1] != l) {
        m = max((double)(l - v[n-1]), m);
    }
    cout << fixed << setprecision(10) << m << '\n';
}