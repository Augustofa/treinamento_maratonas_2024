#include <bits/stdc++.h>

using namespace std;

int main(){
    int a, b, c, d, t;
    cin >> a >> b >> c >> d >> t;

    int dist = abs(a - c) + abs(b - d);
    if(dist == t || (t > dist && (t - dist) % 2 == 0)){
        cout << "Y\n";
    }else{
        cout << "N\n";
    }
}