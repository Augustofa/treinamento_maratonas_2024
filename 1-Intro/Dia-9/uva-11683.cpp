#include <bits/stdc++.h>

using namespace std;

int main(){
    // ios::sync_with_stdio(false);
    // cin.tie(NULL);

    int a, c;
    while(cin >> a >> c && (a != 0 && a != 0)){
        int vet[c];
        cin >> vet[0];

        int res = 0, max = -1;
        for(int i = 1; i < c; i++){
            cin >> vet[i];

            if(vet[i] != a && vet[i] > max){
                int diff = vet[i] - vet[i-1];
                if(diff > 0){
                    res += diff;
                }
            }
        }

        cout << res << "\n";
    }
}