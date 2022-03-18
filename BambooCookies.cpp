#include <iostream>
#include <string>
#include <cmath>

int main(){
    int n, evenCount = 0, oddCount = 0, g;
    std::cin >> n;

    for(int i = 0; i < n; i++){
        std::cin >> g;
        if(g % 2 == 0){
            evenCount++;
        }else{
            oddCount++;
        }
    }
    g = floor(evenCount/2) + floor(oddCount/2);
    std::cout << g;
}