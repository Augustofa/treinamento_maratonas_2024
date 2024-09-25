#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    int i = 1;
    while(getline(cin, s)){
        stringstream ss(s);
        int val;
        int min = INT_MAX, max = INT_MIN;
        int n;
        ss >> n;
        while(ss >> val){
            if(val < min){
                min = val;
            }
            if(val > max){
                max = val;
            }
        }

        int range = max - min;
        cout << "Case " << i << ": " << min << " " << max << " " << range << endl;

        i++;
    }
}