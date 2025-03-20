#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    ll n;
    cin >> n;
    set<ll>in;
    set<ll>out;
    ll a, b;
    ll qtd = 0, m = 0;

    for(int i = 0; i < n; i++){
        cin >> a >> b;

        in.insert(a);
        out.insert(b);
    }

    while(in.size() != 0){
        if(*in.begin() < *out.begin()){
            qtd++;
            m = max(qtd, m);
            in.erase(in.begin());
        }else{
            qtd--;
            out.erase(out.begin());
        }
    }
    cout << m << endl;
    
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