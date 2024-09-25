#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;

    int i = 0;
    while(cin >> n){
        if(i > 0){
            cout << "\n";
        }
        string nomes[n];
        map<string,int> vals;

        for(int i = 0; i < n; i++){
            cin >> nomes[i];
            vals[nomes[i]] = 0;
        }

        for(int i = 0; i < n; i++){
            string nome;
            cin >> nome;
            int valTotal, k;
            cin >> valTotal >> k;

            int valPresente = 0;
            if(k != 0){
                valPresente = valTotal / k;
            }

            for(int j = 0; j < k; j++){
                string s;
                cin >> s;
                vals[s] += valPresente;
            }

            // if(valTotal != valPresente){
            //     vals[nome] += valTotal - (valPresente*k);
            // }
            // cout << "dave: " << vals["dave"] << " " << valPresente << "\n";

            vals[nome] -= valPresente*k;
        }


        for(auto s : nomes){
            cout << s << " " << vals[s] << "\n";
        }

        i++;
    }
}