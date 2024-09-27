#include <bits/stdc++.h>

using namespace std;

int main(){
    // ios::sync_with_stdio(false);
    // cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        int a, b, c;
        cin >> a >> b >> c;

        int jogs[a], tab[101];
        fill(jogs, jogs+a, 1);
        
        for(int i = 1; i <= 100; i++){
            tab[i] = i;
        }

        for(int i = 0; i < b; i++){
            int init, fim;
            cin >> init >> fim;
            tab[init] = fim;
        }

        bool terminou = false;
        int turno = 0;
        for(int i = 0; i < c; i++){
            int dado;
            cin >> dado;
            if(terminou){
                continue;
            }

            jogs[turno] += dado;
            if(jogs[turno] > 100){
                terminou = true;
                continue;
            }
            if(tab[jogs[turno]] != jogs[turno]){
                jogs[turno] = tab[jogs[turno]];
            }
            if(jogs[turno] >= 100){
                terminou = true;
                continue;
            }
            turno++;
            if(turno == a){
                turno = 0;
            }
        }

        for(int i = 0; i < a; i++){
            cout << "Position of player " << i+1 << " is " << jogs[i] << ".\n";
        }
    }
}