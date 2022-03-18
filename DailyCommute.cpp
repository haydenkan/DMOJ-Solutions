#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int main(){
    int n, w, d, a, b;
    cin >> n, w, d;
    bool routes[n + 1][n + 1 * w + 1]{false};
    for(int i = 0; i < w; i++){
        cin >> a >> b;
        routes[a][b] = true;
    }
    for(int i = 1; i < n; i++){
        cin >> a >> b;
        routes[a][b] = true;
    }
}