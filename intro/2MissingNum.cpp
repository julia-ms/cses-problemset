#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m;
    cin >> n;
    vector<int> v(n, 0);

    for(int i = 0; i < n-1; i++){
        cin >> m;
        v[m-1] = 1;
    }

    for(int i = 0; i < n; i++){
        if (v[i] == 0) cout << i + 1 << endl;
    }
}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t = 1;
    //cin >> t; 
    // Descomentar caso sejam lidos varios casos de teste

    while(t--) solve();

    return 0;

}