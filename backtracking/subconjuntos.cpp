#include <bits/stdc++.h>
#define input freopen("inTrie.txt", "r", stdin)
#define output freopen("out.txt", "w", stdout)
using namespace std;

vector<int> numbers(5);

int f(int suma, int pos) {
    if(suma == 7) {
        return 1;
    }
    if(pos >= 4) {
        return 0;
    }
    int sol = f(suma, pos+1);
    if(suma+ numbers[pos] <= 7) {
        sol += f(suma + numbers[pos], pos+1);
    }
    return  sol;
}


int main(){
    for(int i = 0 ; i < 5; i++){
        cin>>numbers[i];
    }
    cout<<f(0,0)<<endl;
}