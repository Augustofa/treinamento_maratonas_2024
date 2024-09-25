#include <bits/stdc++.h>

using namespace std;

int main(){
    // ios::sync_with_stdio(false);
    // cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        string p1, p2;
        cin >> p1 >> p2;
        reverse(p1.begin(), p1.end());
        reverse(p2.begin(), p2.end());

        int cont = 0;
        string d1, d2;
        while(cont < 1000 && !p1.empty() && !p2.empty()){
            d1.push_back(p1.back());
            d2.push_back(p2.back());
            
            p1.pop_back();
            p2.pop_back();

            if(rand()/141%2 == 0){
                for(auto c : d2){
                    p1.push_back(c);
                }
                cout << "Snap! for Jane: " << p1 << "\n";
            }else{
                for(auto c : d1){
                    p2.push_back(c);
                }
                cout << "Snap! for John: " << p2 << "\n";
            }
            cont++;
        }

        if(cont == 1000){
            cout << "Keeps going and going ...\n";
        }else{
            if(p1.empty()){
                cout << "John Wins.\n";
            }else{
                cout << "Jane Wins.\n";
            }
        }
    }
}