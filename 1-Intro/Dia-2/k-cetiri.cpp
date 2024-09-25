#include <bits/stdc++.h>

using namespace std;

int main(){
    int a, b, c;
    cin >> a >> b >> c;
    int vet[3] = {a,b,c};
    sort(vet, vet+3);
    int val;
    if(vet[1] - vet[0] > vet[2] - vet[1]){
        val = vet[0] + vet[2] - vet[1];
    }else if(vet[1] - vet[0] < vet[2] - vet[1]){
        val = vet[1] + vet[1] - vet[0];
    }else{
        val = vet[2] + vet[1] - vet[0];
    }

    cout << val << endl;
}