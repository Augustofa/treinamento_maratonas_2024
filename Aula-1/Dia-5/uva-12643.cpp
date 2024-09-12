#include <bits/stdc++.h>

using namespace std;

int main(){
    // ios::sync_with_stdio(false);
    // cin.tie(NULL);

    int n, i, j;
    while(cin >> n >> i >> j){
        int res = 1;
        for(int k = 1; k <= n; k++){
            i = (i+1)/2;
            j = (j+1)/2;

            if(i == j){
                cout << res << "\n";
                break;
            }
            res++;
        }
    }
}