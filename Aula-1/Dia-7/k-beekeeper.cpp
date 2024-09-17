#include <bits/stdc++.h>

using namespace std;

int main(){
    map<char,int> v = {
        {'a', 1},
        {'e', 1},
        {'i', 1},
        {'o', 1},
        {'u', 1},
        {'y', 1},
    };

    int n;
    cin >> n;
    while(n != 0){
        string melhor = "";
        int melhorQuant = -1;
        for(int i = 0; i < n; i++){
            string s;
            cin >> s;

            int quant = 0;
            for(int i = 0; i < s.size()-1; i++){
                if(v[s[i]] == 1 && s[i] == s[i+1]){
                    quant++;
                }
            }
            if(quant > melhorQuant){
                melhorQuant = quant;
                melhor = s;
            }
        }

        cout << melhor << "\n";

        cin >> n;
    }
}