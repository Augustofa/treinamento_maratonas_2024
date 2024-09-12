#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, t;
    cin >> n >> t;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    long long soma = 0;

    switch(t){
        case 1:
            cout << 7 << "\n";
            break;
        case 2:
            if(a[0] > a[1]){
                cout << "Bigger\n";
            }else if(a[0] == a[1]){
                cout << "Equal\n";
            }else{
                cout << "Smaller\n";
            }
            break;
        case 3:
            sort(a, a+3);
            cout << a[1] << "\n";
            break;
        case 4:
            for(auto num : a){
                soma += num;
            }
            cout << soma << "\n";
            break;
        case 5:
            for(int i = 0; i < n; i++){
                if(a[i] % 2 == 0){
                    soma += a[i];
                }
            }
            cout << soma << "\n";
            break;
        case 6:
            for(auto num : a){
                cout << (char)('a' + (num % 26));
            }
            cout << "\n";
            break;
        case 7:
            int i = 0;
            int cont = 0;
            while(true){
                i = a[i];
                if(i < 0 || i >= n){
                    cout << "Out\n";
                    break;
                }
                if(i == n-1){
                    cout << "Done\n";
                    break;
                }
                if(cont > n){
                    cout << "Cyclic\n";
                    break;
                }
                cont++;
            }
            break;
    }
}