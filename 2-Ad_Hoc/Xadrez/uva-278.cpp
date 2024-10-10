#include <bits/stdc++.h>

using namespace std;

int main(){
    // ios::sync_with_stdio(false);
    // cin.tie(NULL);

    int n;
    cin >> n;

    while(n--){
        char peca;
        int n, m;
        cin >> peca >> n >> m;
        int res;

        switch(peca){
            case 'r':
            case 'Q':
                res = min(n,m);
                break;
            case 'k':
                if(n % 2 == m % 2 && (n % 2 == 1)){
                    res = ((n+1)/2) * ((m+1)/2) + n/2 + m/2;
                }else{
                    res = (m*n)/2;
                }
                break;
            case 'K':
                res = ((n+1)/2) * ((m+1)/2);
                break;
        }

        cout << res << "\n";
    }
}