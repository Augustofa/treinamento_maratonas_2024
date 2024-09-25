#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int a, c;
    while(cin >> a >> c && (a != 0 && a != 0)){
        int vet[c];
        for(int i = 0; i < c; i++){
            cin >> vet[i];
        }

        int count = 0;

        for(int i = a; i > 0; i--){
            bool cut = false;
            for(int j = 0; j < c; j++){
                if(vet[j] < i && !cut){
                    count++;
                    cut = true;
                }
                if(vet[j] >= i && cut){
                    cut = false;
                }
            }
        }

        cout << count << "\n";
    }
}