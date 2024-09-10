#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    int res = n-2;
    if(res <= 0){
        res = 1;
    }
    cout << res << "\n";
}