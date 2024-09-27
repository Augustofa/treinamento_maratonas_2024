#include <bits/stdc++.h>

using namespace std;

int main(){
    // ios::sync_with_stdio(false);
    // cin.tie(NULL);

    int n, k;
    cin >> n >> k;

    map<string,pair<int,int>> mapa;
    int res = 0, taken = 0;
    for(int i = 0; i < k; i++){
        int c1, c2;
        string s1, s2;
        cin >> c1 >> c2 >> s1 >> s2;
        if(s1 == s2){
            mapa[s1] = {-1,-1};
            taken++;
            // cout << "pegou";
        }else{
            if(mapa[s1].first == 0){
                mapa[s1].first = c1;
            }
            if(mapa[s1].first > 0 && c1 != mapa[s1].first){
                // cout << "aqui";
                res++;
                mapa[s1] = {-1,-1};
            }
            if(mapa[s2].first == 0){
                mapa[s2].first = c2;
            }
            if(mapa[s2].first > 0 && c2 != mapa[s2].first){
                // cout << "aqui";
                res++;
                mapa[s2] = {-1,-1};
            }
        }
    }

    if(mapa.size() == n/2){
        res = (n/2) - taken;
    }

    cout << res << "\n";
}