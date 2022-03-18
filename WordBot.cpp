#include <bits/stdc++.h>

int main(){
    int n, c, v;
    std::string s;
    std::cin >> n >> c >> v >> s;
    int cCount = 0, vCount = 0;
    for(int i = 0; i < n; i++){
        std::string k = s.substr(i, 1);
        if(k == "a" || k == "e" || k == "i" || k == "o" || k == "u"){
            vCount++;
            cCount = 0;
        }else if(k == "y"){
            vCount++;
            cCount++;
        }else{
            cCount++;
            vCount = 0;
        }
        if(cCount > c || vCount > v){
            std::cout << "NO\n";
            return 0;
        }
    }
    std::cout << "YES\n";
}