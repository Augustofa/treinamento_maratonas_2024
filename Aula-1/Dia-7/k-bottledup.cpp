#include <bits/stdc++.h>

using namespace std;

int main(){
    int s, v1, v2;
    cin >> s >> v1 >> v2;

    int q1 = s / v1;
    int q2 = 0, rest = s - (q1*v1);
    while(rest % v2 != 0){
        q1--;
        rest += v1;

        if(q1 < 0){
            cout << "IMPOSSIBLE\n";
            return 0;
        }
    }

    cout << q1 << " " << rest / v2 << "\n";
}