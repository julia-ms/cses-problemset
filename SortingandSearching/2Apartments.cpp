#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    ll n, m, k;
    cin >> n >> m >> k;
    vector<ll>vn(n);
    vector<ll>vm(m);
    ll in = 0, im = 0, qtd = 0;

    for(ll i = 0; i < n; i++){
        cin >> vn[i];
    }
    for(ll i = 0; i < m; i++){
        cin >> vm[i];
    }

    sort(vn.begin(), vn.end());
    sort(vm.begin(), vm.end());

    while(in < n && im  < m){
        if(abs(vn[in] - vm[im]) <= k){
            qtd++;
            in++;
            im++;
            //cout <<"1 "<< in << " " << im << " " << qtd << endl;
        }else if(vn[in] - vm[im] < 0){
            in++;
            //cout <<"2 "<< in << " " << im << " " << qtd << endl;
        }else{
            im++;
            //cout <<"3 "<< in << " " << im << " " << qtd << endl;
        }

    }
    cout << qtd << endl;

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