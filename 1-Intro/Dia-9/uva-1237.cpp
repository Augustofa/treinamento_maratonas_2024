#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        int d;
        cin >> d;

        string nomes[d+1];
        vector<int> vet(1000000, 0);
        for(int i = 1; i <= d; i++){
            string nome;
            cin >> nome;
            nomes[i] = nome;

            int l, h;
            cin >> l >> h;
            for(int j = l; j <= h; j++){
                if(vet[j] == 0){
                    vet[j] = i;
                }else{
                    vet[j] = -1;
                }
            }
        }

        int q;
        cin >> q;
        while(q--){
            int p;
            cin >> p;

            if(vet[p] > 0){
                cout << nomes[vet[p]] << "\n";
            }else{
                cout << "UNDETERMINED\n";
            }
        }
        if(t > 0){
            cout << "\n";
        }
    }

    return 0;
}