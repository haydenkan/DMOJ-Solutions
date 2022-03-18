#include <iostream>
#include <string>
#include <stdio.h>
#include <string.h>

using namespace std;

int main(){
    //b = 0;
    //g = 1;
    string x;
    int m = 0, n = 0, k = 0, y = 0, t = 0;
    cin >> m >> n >> k;
    bool a[m][n];
    memset(a, false, sizeof(a));
    bool r[m] = {false};
    bool c[n] = {false};
    for(int i = 0; i < k; i++){
        cin >> x >> y;
        if(x.compare("R") == 0){
            r[y - 1] = !r[y - 1];
        }else{
            c[y - 1] = !c[y - 1];
        }
    }  
    for(int i = 0; i < m; i++){
        if(r[i] == true){
            for(int f = 0; f < n; f++){
                if(a[i][f] == false){
                    t++;
                }else{
                    t--;
                }
                a[i][f] = !a[i][f];
            }
        }
    }
    for(int i = 0; i < n; i++){
        if(c[i] == true){
            for(int f = 0; f < m; f++){
                if(a[f][i] == false){
                    t++;
                }else{
                    t--;
                }
                a[f][i] = !a[f][i];
            }
        }
    }
    cout << t;
}