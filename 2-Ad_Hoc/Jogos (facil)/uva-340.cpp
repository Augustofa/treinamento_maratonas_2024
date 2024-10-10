#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;

    int q = 1;
    while(cin >> n && n != 0){
        int res[n], quants[10];
        memset(quants, 0, sizeof(quants));
        for(int i = 0; i < n; i++){
            cin >> res[i];
            quants[res[i]]++;
        }

        cout << "Game " << q << ":\n";

        bool fim = false;
        while(true){
            int tempQuants[10] = {0};
            int strong = 0, weak = 0;
            for(int i = 0; i < n; i++){
                int val;
                cin >> val;
                if(val == 0){
                    fim = true;
                    continue;
                }

                if(val == res[i]){
                    strong++;
                    if(tempQuants[val] == quants[val]){
                        weak--;
                    }else{
                        tempQuants[val]++;
                    }
                }else{
                    if(quants[val] > tempQuants[val]){
                        weak++;
                        tempQuants[val]++;
                    }
                }
            }
            if(fim){
                break;
            }

            cout << "\t(" << strong << "," << weak << ")\n";
        }
        q++;
    }
}