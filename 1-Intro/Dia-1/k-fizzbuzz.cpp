#include <bits/stdc++.h>

using namespace std;

int main(){
    int x, y, n;
    cin >> x >> y >> n;
    for(int i = 1; i <= n; i++){
        string res = "";
        if(i % x == 0){
            res += "Fizz";
        }
        if(i % y == 0){
            res += "Buzz";
        }

        if(res.empty()){
            cout << i << endl;
        }else{
            cout << res << endl;
        }
    }
}