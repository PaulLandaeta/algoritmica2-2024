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
        return find(father);
    }
}
// tratar de unir el nodo a con el nodo b 
void union_(int a, int b) {
    int fatherIzq  = find(a);
    int fatherDer = find(b);
    parent[fatherDer] = fatherIzq;
}

int main(){

}