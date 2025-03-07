#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n;
    cin >> n;
    while(n != 1){
        cout << n << " ";
        if(n%2 == 0){
            n /= 2;
        }else{
            n = n * 3 + 1;
        }
    }
    cout << "1\n";
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