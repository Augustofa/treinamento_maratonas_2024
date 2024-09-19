#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, m;

    while(cin >> n >> m && n != 0){
        double minVal = DBL_MAX;
        int minA = -1, minB = -1;
        for(int i = 0; i < n; i++){
            double a, b;
            cin >> a >> b;
            if(a <= m){
                double val = b/a;
                if(val == minVal && a > minA){
                    minA = a;
                    minB = b;
                    minVal = val;
                }
                if(val < minVal){
                    minA = a;
                    minB = b;
                    minVal = val;
                }
            }
        }

        if(minA == -1){
            cout << "No suitable tickets offered\n";
        }else{
            cout << "Buy " << minA << " tickets for $" << minB << "\n";
        }
    }
}