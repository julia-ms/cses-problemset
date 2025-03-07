#include <bits/stdc++.h>
using namespace std;

typedef long long ll;


// 3 1 4 2
// 3 1 5 2 4
//5 3 1 6 2 4

void solve() {
    ll n;
    cin >> n;
    if(n == 1){
        cout << 1 << endl;
    }
    else if(n < 4){
        cout << "NO SOLUTION" << endl;
    } 
    else{
        for(ll i = n -1; i > 0; i--){
            if(i % 2 == 1) cout << i << " ";
        }
        cout << n;
        for(ll i = 2; i < n; i++){
            if(i % 2 == 0) cout << " " << i;
        }
        cout << endl;
    }
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