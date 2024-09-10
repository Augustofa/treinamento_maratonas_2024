#include <bits/stdc++.h>

using namespace std;

class Prop{
    public:
        string nome;
        double preco;
        double compliance;

        Prop(string nome, double preco, double compliance){
            this->nome = nome;
            this->preco = preco;
            this->compliance = compliance;
        }
};

int compare(Prop p1, Prop p2){
    if(p1.compliance == p2.compliance){
        return p1.preco < p2.preco;
    }
    return p1.compliance > p2.compliance;
}

int main(){
    for(int j = 1; true; j++){
        int n, p;
        cin >> n >> p;
        if(n == 0 && p == 0){
            break;
        }
        
        string s;
        getline(cin, s);
        for(int i = 0; i < n; i++){
            getline(cin, s);
        }

        vector<Prop*> vet;
        for(int i = 0; i < p; i++){
            string nome;
            getline(cin, nome);
            getline(cin, s);

            double preco, q;
            Prop *prop = new Prop(nome, preco, q/p);
            vet.push_back(prop);
        }

        sort(vet.begin(), vet.end(), compare);
        for(auto p : vet){
            cout << p->nome << endl;
        }
    }
}