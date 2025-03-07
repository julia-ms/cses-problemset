#include <bits/stdc++.h>
using namespace std;

void solve() {
    string dna;
    int size, mx = 1, cur = 1;
    char ch = 'x';

    cin >> dna;

    size = dna.length();
    for (int i = 0; i < size; i++){
        if(ch == dna[i]){
            cur++; 
            //cout << i << " " << cur << endl;
        } 
        else{
            ch = dna[i];
            mx = max(mx, cur);
            cur = 1;
            //cout << i << " " << ch << " " << dna[i] << endl; 
        }
    }
    mx = max(mx, cur);
    cout << mx << endl;
    
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