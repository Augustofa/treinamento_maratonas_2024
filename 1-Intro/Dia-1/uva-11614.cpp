#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ll t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        cout << ((long long)floor(sqrt( 2.0 * n + 0.25 ) + 0.5) - 1) << endl;
    }
}