#include <bits/stdc++.h>

using namespace std;

int main(){
    double a, b, h;
    cin >> a >> b >> h;

    int res = ceil((h-a)/(a-b));
    // cout << (h-(a-1)) << "\n";
    if(h <= a){
        res = 0;
    }

    cout << res+1 << "\n";
}