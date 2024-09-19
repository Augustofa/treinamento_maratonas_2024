#include <bits/stdc++.h>

using namespace std;

int main(){
    int a, b, h;
    cin >> a >> b >> h;

    int t = 0, alt = 0;
    while(alt < h){
        t++;
        alt += a;
        if(alt >= h){
            break;
        }
        alt -= b;
    }

    cout << t << "\n";
}