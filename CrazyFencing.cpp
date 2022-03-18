#include <iostream>
#include <string>

using namespace std;
int main(){
    int n = 0;
    double a = 0.00;
    cin >> n;
    double l[n + 1], w[n];
    for(int i = 0; i < n + 1; i++){
        cin >> l[i];
    }
    for(int i = 0; i < n; i++){
        cin >> w[i];
    }
    for(int i = 0; i < n; i++){
        a += w[i] * (l[i] + l[i+1])/2;
    }
    cout << fixed << a;
}


