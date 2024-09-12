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

        int res = 0;
        bool poss = true;
        int count1 = 0, count2 = 0;
        for(int i = 0; i < s1.size(); i++){
            if(s1[i] == '1'){
                count1++;
            }

            if(s2[i] == '1'){
                count2++;
            }
        }

        if(count1 > count2){
            cout << "Case " << k << ": -1\n";
            continue;
        }

        for(int i = 0; i < s1.size(); i++){
            if(s1[i] == '1' && s2[i] == '0'){
                for(int j = 0; j < s1.size(); j++){
                    if((s1[j] == '0' || s1[j] == '?') && s2[j] == '1'){
                        char aux = s1[i];
                        s1[i] = s1[j];
                        s1[j] = aux;
                    }
                }
                res++;
            }
        }

        for(int i = 0; i < s1.size(); i++){
            if(s1[i] != s2[i]){
                res++;
            }
        }

        cout << "Case " << k << ": " << res << "\n";
    }

}