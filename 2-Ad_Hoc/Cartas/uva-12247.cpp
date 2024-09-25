#include <bits/stdc++.h>

using namespace std;

int main(){
    // ios::sync_with_stdio(false);
    // cin.tie(NULL);

    int a, b, c, x, y;
    int s[3], p[3];
    while(cin >> s[0] >> s[1] >> s[2] >> p[0] >> p[1] && s[0] != 0){
        bool usadas[54];
        memset(usadas, false, sizeof(usadas));
        usadas[s[0]] = true;
        usadas[s[1]] = true;
        usadas[s[2]] = true;
        usadas[p[0]] = true;
        usadas[p[1]] = true;

        sort(s, s+3);
        sort(p, p+2);
        
        int res = 53;
        int i;
        if(p[0] > s[2]){
            for(i = 1; i <= 52 && i < res; i++){
                if(!usadas[i]){
                    res = i;
                    break;
                }
            }
        }
        
        if(p[1] > s[2]){
            for(i = s[2]+1; i <= 52 && i < res; i++){
                if(!usadas[i]){
                    res = i;
                    break;
                }
            }
        }
        
        if(p[0] > s[1]){
            for(i = s[1]+1; i <= 52 && i < res; i++){
                if(!usadas[i]){
                    res = i;
                    break;
                }
            }
        }
        if(res == 53){
            res = -1;
        }

        cout << res << "\n";
    }
}