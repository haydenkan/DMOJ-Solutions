#include <iostream>
#include <bits/stdc++.h>
#include <string>

int main(){
    std::string s = "words and 987";
    bool neg = false;
    int g = 0;
    for(char c: s){
        if(c == 45){
            neg = true;
        }else if((int)c - 48 >= 0 && (int)c - 48 <= 9){
            g*=10;
            g+=(int)c - 48;
        }
    }
    std::cout << g;

}