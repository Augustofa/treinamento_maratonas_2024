#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n, m;
        cin >> n >> m;

        vector<int> premios[n]; 
        int vals[n];
        for(int i = 0; i < n; i++){
            int k;
            cin >> k;
            for(int j = 0; j < k; j++){
                int aux;
                cin >> aux;
                premios[i].push_back(aux);
            }
            cin >> vals[i];
        }

        int stickers[m+1];
        for(int i = 1; i <= m; i++){
            cin >> stickers[i];
        }

        int total = 0;
        for(int i = 0; i < n; i++){
            int menor = INT_MAX;
            for(auto val : premios[i]){
                if(stickers[val] < menor){
                    menor = stickers[val];
                }
            }
            total += vals[i] * menor;
        }

        cout << total << "\n";
    }
}