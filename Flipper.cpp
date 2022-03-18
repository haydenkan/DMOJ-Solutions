#include <string>
#include <iostream>

int main(){
    int h = 0, v = 0;
    std::string s;
    std::cin >> s;
    for(int i = 0; i < s.length(); i++){
        if(s.substr(i, 1).compare("H") == 0){
            h++;
        }else{
            v++;
        }
    }
    h%=2;
    v%=2;

    if(h == 0 && v == 0){
        std::cout << "1 2" << std::endl << "3 4";
    }else if(h == 1 && v == 0){
        std::cout << "3 4" << std::endl << "1 2";
    }else if(h == 1 && v == 1){
        std::cout << " 4 3" << std::endl << "2 1";  
    }else if(h == 0 && v == 1){
        std::cout << "2 1" << std::endl << "4 3";
    }
}