#include <bits/stdc++.h>

using namespace std;

int main(){
    // ios::sync_with_stdio(false);
    // cin.tie(NULL);

    int t;
    cin >> t;

    for(int k = 1; k <= t; k++){
        string s1, s2;
        cin >> s1 >> s2;

        int a = 0, b = 0, c = 0, d = 0, e = 0, f = 0;
        for(int i = 0; i < s1.size(); i++){
            if(s1[i] == '0' && s2[i] == '0') a++;
            if(s1[i] == '0' && s2[i] == '1') b++;
            if(s1[i] == '1' && s2[i] == '0') c++;
            if(s1[i] == '1' && s2[i] == '1') d++;
            if(s1[i] == '?' && s2[i] == '0') e++;
            if(s1[i] == '?' && s2[i] == '1') f++;
        }

        int res = 0;
        res += min(b, c);
        b -= res;
        c -= res;

        if(b > 0){
            res += b + e + f;
        }else{
            if(c > f){
                res = -1;
            }else{
                e -= c;
                res += c;
                // Soma o c duas vezes pq tem q trocar a posição com o ? e transformar o ? em numero

                res += c + e + f;
            }
        }

        cout << "Case " << k << ": " << res << "\n";
    }

}