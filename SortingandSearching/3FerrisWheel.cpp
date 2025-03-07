#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    ll n, x;
    cin >> n >> x;
    vector<ll>v(n);
    ll beg = 0, fin = n-1;
    ll qtd = 0;

    for(ll i = 0; i < n; i++){
        cin >> v[i];
    }
    sort(v.begin(), v.end());

    while(fin - beg >= 0){
        if(fin == beg){
            qtd++;
            beg++;
            fin--;
        }else if(v[fin] + v[beg] <= x){
            qtd++;
            beg++;
            fin--;
        }else{
            qtd++;
            fin--;
        }
    }

    cout << qtd << endl;
}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t = 1;
    //cin >> t; 
    // Descomentar caso sejam lidos vÃ¡rios casos de teste

    while(t--) solve();

    return 0;

}