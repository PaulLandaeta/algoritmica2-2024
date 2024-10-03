// Hallar todos los subcojuntos de K elementos de un array de numeros

#include <bits/stdc++.h>
#define input freopen("inTrie.txt", "r", stdin)
#define output freopen("out.txt", "w", stdout)
using namespace std;


// Entender bien los parametros por referencia
vector<int> numbers(10);
vector<bool> vis(10);
int k;


void printVector(vector<int> v) {
  for(int i = 0; i< v.size();i++) {
    cout<<"["<<v[i]<<"]";
  }
  cout<<endl;
}

int f(vector<int> estado,vector<vector<int> > &soluciones) {
    if(estado.size() == k) {
        soluciones.push_back(estado);
    }
    for(int i = 0; i < numbers.size(); i++) {
        // el numero no ha sido tomado
        // cout<< " debug" << endl;
        // printVector(estado);
        // cout<< " debug" << endl;
        if(vis[i] == 0 && estado.size() < k) {
            estado.push_back(numbers[i]);
            vis[i] = 1;
            f(estado, soluciones);
            estado.pop_back();
            vis[i] = 0;
        }
    }
}



int main() {
    for(int i = 0; i < 10; i++){
       cin>>numbers[i];
       vis[i] = 0; 
    }
    cin>>k;
    vector<int> currentState;
    vector<vector<int>> soluciones; 
    f(currentState,soluciones);
    for(int i = 0; i < soluciones.size(); i++) {
        for(int j = 0 ; j < k; j++ ) {
            cout<<"[" <<soluciones[i][j] <<"]";
        }
        cout<<endl;
    }
}