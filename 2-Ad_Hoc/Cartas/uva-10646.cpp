#include <bits/stdc++.h>

using namespace std;

int main(){
    // ios::sync_with_stdio(false);
    // cin.tie(NULL);

    int t;
    cin >> t;
    int q = 1;
    while(t--){
        vector<string> vals(52);
        for(int i = 0; i < 52; i++){
            cin >> vals[i];
        }

        cout << "Case " << q << ": " << vals[32] << "\n";
        q++;
    }
}