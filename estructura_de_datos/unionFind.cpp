#include <bits/stdc++.h>
#define input freopen("inTrie.txt", "r", stdin)
#define output freopen("out.txt", "w", stdout)
using namespace std;

int n = 10;
vector<int> parents(n);

void init() {
    for(int i = 0; i < n; i++) {
        parents[i] = i;
    }
}

int find(int node) {
    int father = parents[node];
    if(node == father) {
        return node;
    }
    else {
        parents[node] = find(father);
        return parents[node];
    }
}
// tratar de unir el nodo a con el nodo b 
void union_(int a, int b) {
    int fatherIzq  = find(a);
    int fatherDer = find(b);
    parent[fatherDer] = fatherIzq;
}

bool sameComponent(int a,int b) {
    return find(a) == find(b);
} 

int contNodes (int a) {
    int fatherA = find(a);
    int cont = 0;
    for(int i = 0; i < 10; i++) {
        // cont += (fatherA == find(i));
        if(fatherA == find(i)) { 
            cont++;
        }
    }
    return cont;
}
int main(){

}