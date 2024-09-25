#include <bits/stdc++.h>

using namespace std;

int main(){
    int p, a, b, c, d, n;
    cin >> p >> a >> b >> c >> d >> n;

    double max = DBL_MIN;
    double maxDiff = DBL_MIN;
    for(int k = 1; k <= n; k++){
        double val = p * (sin(a * k + b) + cos(c * k + d) + 2);

        if(val > max){
            max = val;
        }
        double diff = max - val;

        if(diff > maxDiff){
            maxDiff = diff;
        }
    }

    if(maxDiff == DBL_MIN){
        maxDiff = 0;
    }

    cout << fixed << setprecision(6) << maxDiff;
}