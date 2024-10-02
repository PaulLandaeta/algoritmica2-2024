#include <bits/stdc++.h>
#define input freopen("inTrie.txt", "r", stdin)
#define output freopen("out.txt", "w", stdout)
using namespace std;

string word = "palaa";
vector<char> abe(10);
vector<bool> vis(10);

int f(int pos_word) {
    if(pos_word==word.size()) {
        return 1;
    }
    for(int i = 0; i < 10; i++) {
        if(vis[i] == false) {
            if(abe[i] == word[pos_word]) {
                vis[i] = 1;
                return f(pos_word+1);
            }
        }
    }
    return 0;
}

int main(){
    for(int i = 0; i < 10; i++ ) {
        cin>>abe[i];
    }
    if(f(0)) {
      cout<<"si existe"<<endl;
    } else {
      cout<< "no existe"<<endl;
    }
}