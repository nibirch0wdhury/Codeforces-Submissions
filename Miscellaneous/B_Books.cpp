#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int a[100099];
ll n, t; 

int bookr(int l, int r){
    int index = l;
    int ans = 0;
    while(l <= r){
        int mid = (l + r)/2;
        if((a[mid] - a[index]) == t){
            ans = mid - index;
            return ans;
        }
        else if(a[mid] - a[index] < t){
            ans = mid - index;
            l = mid + 1;
        }
        else{
            r = mid -1;
        }
    }
    return ans;
}



int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n >> t;
    a[0] = 0;
    for(int i = 1; i <=n; i++){
        cin >> a[i];
        a[i] = a[i] + a[i-1];
    }    
    int ans = 0;
    for(int i = 0; i <= n; i++){
        ans = max(ans , bookr(i, n));
        //cout << bookr(i, n) << " ";
    }
    cout << ans << '\n';
}