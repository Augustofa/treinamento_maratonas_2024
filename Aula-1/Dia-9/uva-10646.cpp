#include <bits/stdc++.h>

using namespace std;

int main(){
    // ios::sync_with_stdio(false);
    // cin.tie(NULL);

    map<char,int> m = {
        {'A', 10},
        {'T', 10},
        {'J', 10},
        {'Q', 10},
        {'K', 10},
    };

    int t;
    cin >> t;
    int q = 1;
    while(t--){
        vector<string> vals(52);
        for(int i = 0; i < 52; i++){
            cin >> vals[i];
        }

        int pos = 0;

        int y = 0;
        // for(int i = 0; i < 3; i++){
        //     int val;
        //     if(m[s[0]] == 0){
        //         val = (s[0] - '0');
        //     }else{
        //         val = 10;
        //     }

        //     y += val;
        // }



        q++;
    }
}