#include <bits/stdc++.h>

using namespace std;

int main(){
    // ios::sync_with_stdio(false);
    // cin.tie(NULL);

    int a, b;
    while(cin >> a >> b){
        if(a == 0 && b == 0){
            break;
        }
        map<int,bool> mA, mB;
        int repA = 0, repB = 0;
        for(int i = 0; i < a; i++){
            int val;
            cin >> val;
            mA[val] = true;
        }
        for(int i = 0; i < b; i++){
            int val;
            cin >> val;
            mB[val] = true;
        }
        
        int contA = 0, contB = 0;
        for(auto val : mA){
            if(val.second && !mB[val.first]){
                contA++;
            }
        }
        for(auto val : mB){
            if(val.second && !mA[val.first]){
                contB++;
            }
        }
        
        cout << min(contA, contB) << "\n";
    }
}