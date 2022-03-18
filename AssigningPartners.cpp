#include <iostream>
#include <string>

int main(){
    int n;
    std::cin >> n;
    std::string a[n], b[n];
    for(int i = 0; i < n; i++){
       std::cin >> a[i];
    }
    for(int i = 0; i < n; i++){
        std::cin >> b[i];
    }
    for(int i = 0; i < n; i++){
        if(a[i].compare(b[i]) == 0){
            std::cout << "bad";
            return 0;
        }
        for(int j = 0; j < n; j++){
            if(a[i].compare(b[j]) == 0 && b[i].compare(a[j]) != 0){
                std::cout << "bad";
                return 0;
            }
            if(a[i].compare(a[j]) == 0 && b[i].compare(b[j]) != 0){
                std::cout << "bad";
                return 0;
            }
            if(b[i].compare(a[j]) == 0 && a[i].compare(b[j]) != 0){
                std::cout << "bad";
                return 0;
            }
            if(b[i].compare(b[j]) == 0 && a[i].compare(a[j]) != 0){
                std::cout << "bad";
                return 0;
            }
        }
    }
    std::cout << "good";
}