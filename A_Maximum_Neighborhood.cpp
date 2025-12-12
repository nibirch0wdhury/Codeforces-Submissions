#include <bits/stdc++.h>
using namespace std;

using ll = long long;
int arr[205][205];
int ans[101];

void solve(int n){
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <=n; j++){
            arr[i][j] = (i-1)*n + j;
        }
    }
    for(int i = 0; i <= n; i++){
        arr[i][0] = 0;
        arr[0][i] = 0;
        arr[0][n+i] = 0;
        arr[n+i][0] = 0;
    }
    int mm = 0, a = 0;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <=n; j++){
            a = arr[i][j+1] + arr[i+1][j] + arr[i-1][j] + arr[i][j-1] + arr[i][j];
            //cout << a << " ";
            mm = max(a, mm);
        }
    }
    ans[n] = mm;
}       

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin >> tt;
    for(int i = 1; i <= 100; i++){
        solve(i);
    }
    for(int i = 0; i < tt; i++){
        int x;
        cin >> x;
        cout << ans[x] << '\n';
    }
}