#include <bits/stdc++.h>

using namespace std;

int main(){
    // ios::sync_with_stdio(false);
    // cin.tie(NULL);

    int n;
    char b;
    cin >> n >> b;

    map<string, int> mapa = {
        {"A", 11},
        {"K", 4},
        {"Q", 3},
        {"J", 2},
        {"T", 10},
        {"9", 0},
        {"8", 0},
        {"7", 0},
        {"Ad", 11},
        {"Kd", 4},
        {"Qd", 3},
        {"Jd", 20},
        {"Td", 10},
        {"9d", 14},
        {"8d", 0},
        {"7d", 0},
    };

    int soma = 0;
    for(int i = 0; i < 4*n; i++){
        string s;
        cin >> s;
        
        if(s[1] == b){
            s[1] = 'd';
        }else{
            s.pop_back();
        }
        soma += mapa[s];
    }

    cout << soma << '\n';
}