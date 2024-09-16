#include <bits/stdc++.h>

using namespace std;

int main(){
    double h, u, d, f;

    while(cin >> h >> u >> d >> f){
        if(h == 0){
            break;
        }

        double fat = (f / 100) * u;
        double alt = 0;
        int dia = 1;
        while(alt <= h){
            // cout << "dia " << dia << " " << alt << " " << u << "\n";

            alt += u;
            if(alt > h){
                break;
            }
            u -= fat;
            if(u < 0){
                u = 0;
            }
            alt -= d;
            if(alt < 0){
                break;
            }

            dia++;
        }

        if(alt <= 0){
            cout << "failure on day " << dia << "\n";
        }else{
            cout << "success on day " << dia << "\n";
        }
    }
}
