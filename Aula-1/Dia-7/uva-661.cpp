#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, m, c;
    bool prim = false;

    int seq = 1;
    while(true){
        cin >> n >> m >> c;
        if(n == 0 && m == 0 && c == 0){
            break;
        }

        bool lig[n+1];
        int pot[n+1];
        for(int i = 1; i <= n; i++){
            cin >> pot[i];
            lig[i] = false;
        }

        int uso = 0, maior = 0;
        bool blow = false;
        for(int i = 1; i <= m; i++){
            int op;
            cin >> op;

            if(lig[op]){
                uso -= pot[op];
            }else{
                uso += pot[op];
            }

            maior = max(maior, uso);

            if(uso > c){
                blow = true;
            }

            lig[op] = !lig[op];
        }

        cout << "Sequence " << seq << "\n";
        if(blow){
            cout << "Fuse was blown.\n\n";
        }else{
            cout << "Fuse was not blown.\n";
            cout << "Maximal power consumption was " << maior << " amperes.\n\n";
        }
        seq++;
    }
}