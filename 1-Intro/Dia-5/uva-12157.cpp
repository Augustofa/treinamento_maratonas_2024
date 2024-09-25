#include <bits/stdc++.h>

using namespace std;

int main(){
    // ios::sync_with_stdio(false);
    // cin.tie(NULL);

    int t;
    cin >> t;

    for(int j = 1; j <= t; j++){
        int n;
        cin >> n;
        int mile = 0, juice = 0;
        for(int i = 0; i < n; i++){
            int dur;
            cin >> dur;

            mile += (dur/30 * 10) + 10;
            juice += (dur/60 * 15) + 15;
        }

        cout << "Case " << j;
        if(mile == juice){
            cout << ": Mile Juice " << mile << "\n";
        }else if(mile < juice){
            cout << ": Mile " << mile << "\n";
        }else{
            cout << ": Juice " << juice << "\n";
        }
    }
}