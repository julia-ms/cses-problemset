//tomei TL usando vector e precisei trocar pra multiset

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    int n, m, vm, x;
    cin >> n >> m;
    multiset<int>vn;

    for(int i = 0; i < n; i++){
        cin >> x;
        vn.insert(x);
    }

    for(int i = 0; i < m; i++){
        cin >> vm;
        auto k = vn.upper_bound(vm);
        if(k != vn.begin()){
            --k;
            cout << *k << endl;
            vn.erase(k);
        } else{
            cout << "-1" << endl;
        }
    }

}

int main() {

    ios_base::sync_with_stdio(false);
    //cin.tie(0);

    int t = 1;
    //cin >> t; 
    // Descomentar caso sejam lidos vÃ¡rios casos de teste

    while(t--) solve();

    return 0;

}