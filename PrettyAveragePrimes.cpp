#include <iostream>
#include <string>
#include <math.h>

int main(){
    int a, b, n;
    bool at, bt;
    std::cin >> n;
    int m[n]{0};
    
    for(int i = 0; i < n; i++){
        std::cin >> m[i];
    }
    for(int i = 0; i < n; i++){
        m[i]*=2;
        for(int j = 2; j < m[i]; j++){
            a = j;
            b = m[i] - a;
            for(int k = 2; k < a / 2; k++){
                if(a % k == 0){
                    at = false;
                    break;
                }
            }
            for(int k = 2; k < b / 2; k++){
                if(b % k == 0){
                    bt = false;
                    break;
                }
                
            }
            if(at && bt){
                std::cout << a << " " << b << std::endl;
                break;
            }
            at = true;
            bt = true;

        }
    }
    
}

