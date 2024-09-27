#include <bits/stdc++.h>

using namespace std;

int main(){
    // ios::sync_with_stdio(false);
    // cin.tie(NULL);

    int n;
    string op;
    cin >> n >> op;

    bool out = (op == "out") ? true : false;
    vector<int> orig;
    for(int i = 0; i < n; i++){
        orig.push_back(i);
    }

    vector<int> vet = orig;
    int cont = 0;
    do{
        vector<int> temp(n);
        int i = 0, j = n/2;
        bool odd = false;
        if(n % 2 != 0){
            if(out){
                j = ceil(n/2.0);
            }
            odd = true;
        }
        int pos = 0;
        while(i < n/2 && j < n){
            if(out){
                temp[pos] = vet[i];
                temp[pos+1] = vet[j];
            }else{
                temp[pos] = vet[j];
                temp[pos+1] = vet[i];
            }
            pos += 2;
            i++;
            j++;
        }
        
        if(odd){
            if(out){
                temp[pos] = vet[i];
            }else{
                temp[pos] = vet[j];
            }
        }

        // for(int i = 0; i < n; i++){
        //     cout << temp[i];
        // }
        // cout << "\n";
        vet = temp;
        cont++;
    }while(vet != orig);

    cout << cont << "\n";
}