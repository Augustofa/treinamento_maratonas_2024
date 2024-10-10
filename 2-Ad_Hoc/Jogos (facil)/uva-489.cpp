#include <bits/stdc++.h>

using namespace std;

int main(){
    // ios::sync_with_stdio(false);
    // cin.tie(NULL);

    int t;
    while(cin >> t && t != -1){
        string res, chutes;
        getline(cin, res);
        getline(cin, res);

        map<char,int> mapa;
        for(auto c : res){
            mapa[c]++;
        }
        int cont = mapa.size();
        int erros = 0;

        getline(cin, chutes);
        for(auto c : chutes){
            if(mapa[c] > 0){
                cont--;
                mapa[c] = -1;
            }else if(mapa[c] == 0){
                erros++;
            }
            if(cont == 0 || erros == 7){
                break;
            }
        }

        cout << "Round " << t << "\n";
        if(erros == 7){
            cout << "You lose.\n";
        }else if(cont == 0){
            cout << "You win.\n";
        }else{
            cout << "You chickened out.\n";
        }
    }
}