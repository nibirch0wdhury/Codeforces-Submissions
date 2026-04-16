#include <bits/stdc++.h>
using namespace std;

using ll = long long;


int main(){
    int n;
    cin >> n;
    vector <int> a = {4, 7, 47, 44, 77, 44, 444, 447, 474, 477, 744, 747, 774, 777, 4444, 4447, 4474, 4477, 4744, 4747, 4774, 4777, 7444, 7447, 7474, 7477, 7744, 7747, 7774, 7777};
    for(int i = 0; i < a.size(); i++){
        if(n%a[i] == 0){
            cout << "YES" << '\n';
            return 0;
        }
    }
    cout << "NO" << '\n';
}
