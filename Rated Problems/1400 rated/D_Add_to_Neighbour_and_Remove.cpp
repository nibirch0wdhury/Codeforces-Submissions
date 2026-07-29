#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define yes    cout << "YES";
#define no     cout << "NO";

vector <int> tree;
int n;
void gen(vector <int> &v,int id){
    if(id == n-1){
        int is_same = tree[0];
        int ct = count(tree.begin(), tree.end(), is_same);
        if(ct == tree.size()){
            // for(int a: tree) cout << a << " ";
            // cout << endl;
            cout << n- tree.size() << endl;
            // return (n - tree.size());
        }  
    }
    if(id < n){
        tree.push_back(v[id]);
        gen(v, id+1);
        tree.pop_back();
    } 
    if(id < n && id != 0){
        tree[tree.size()-1] += v[id];
        gen(v, id+1);
        tree.pop_back();
    }
    
}

void solve(){
    cin >> n;
    vector <int> v(n);
    for(int i = 0; i < n; i++)
        cin >> v[i];
    // cout << gen(v, 0) << '\n';
    gen(v, 0);
    tree.clear();
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