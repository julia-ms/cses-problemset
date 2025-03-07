#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    ll n;
    cin >> n;
    vector<ll>v(n);
    ll qtd = 1;
    
    for(ll i = 0; i < n; i++){
        cin >> v[i];
    }
    
    sort(v.begin(), v.end()); 

    for(ll i = 1; i < n; i++){
        if(v[i] != v[i-1]) qtd++;
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