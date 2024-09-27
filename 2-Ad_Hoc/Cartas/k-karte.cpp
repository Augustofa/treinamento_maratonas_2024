#include <bits/stdc++.h>

using namespace std;

int main(){
    // ios::sync_with_stdio(false);
    // cin.tie(NULL);

    map<char, int> naipes = {
        {'P', 0},   
        {'K', 1},   
        {'H', 2},   
        {'T', 3},   
    };

    string linha;
    getline(cin, linha);
    string carta;
    bool greska = false;
    vector<vector<int>> cartas(4, vector<int>(14, 0));
    for(int i = 0; i < linha.size(); i += 3){
        carta = linha.substr(i, 3);
        int val;
        int naipe = naipes[carta[0]];
        if(carta[1] == '0'){
            val = carta[2] - '0';
        }else{
            val = 10 + (carta[2] - '0');
        }
        if(cartas[naipe][val] == 1){
            greska = true;
        }else{
            cartas[naipe][val] = 1;
        }
    }

    if(greska){
        cout << "GRESKA\n";
        return 0;
    }

    for(auto vet : cartas){
        int cont = 0;
        for(auto val : vet){
            if(val == 1){
                cont++;
            }
        }
        cout << 13 - cont << " ";
    }
    cout << "\n";
}