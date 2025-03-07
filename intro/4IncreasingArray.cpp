#include <bits/stdc++.h>
using namespace std;

void solve() { 
    long long n, qtd = 0;
    cin >> n;
    long long vet[n];

    cin >> vet[0];

    for(int i = 1; i < n; i++){
        cin >> vet[i];
        if (vet[i] < vet[i-1]){
            qtd = qtd + (vet[i-1] - vet[i]);
            vet[i] = vet[i-1];
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