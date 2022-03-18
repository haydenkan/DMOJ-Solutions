#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <string>


void p1(){
    int sum = 0;
    for(int i = 0; i < 10; i++){
        if(i % 3 == 0 || i % 5 == 0){
            sum += i;
        }
    }
    std::cout << sum;
}

void p2(){
    int sum = 0;
    int a = 1;
    int b = 1;
    int cont = true;
    while(cont){
        a += b;
        b += a;
        if(a > 4000000){
            break;
        }
        if(a % 2 == 0){
            sum += a;
        }
        if(b > 4000000){
            break;
        }
        if(b % 2 == 0){
            sum += b;
        }
    }
    std:: cout << sum;
}

void p3(){
    long long int n = 600851475143, g = sqrt(n), max;
    for(int i = 2; i < g; i++){
        if(fmod(pow(2, i - 1), i) == 1 && 600851475143 % i == 0){
            max = i;
        }  
    }
}

void p4(){
    std::string max;
    for(int i = 913; i < 1000; i++){
        for(int j = 991; j < 1000; j++){
            std::string k = std::to_string(j * i);
            std::string l(k);
            std::reverse(l.begin(), l.end());
            bool setmax = true;
            for(int m = 0; m < ceil(k.length()/2); m++){
                if(l.substr(m, 1) != k.substr(m, 1)){
                    setmax = false;
                    break;
                }
            }
            if(setmax == true){
                max = k;
            }
        }
    }
    std::cout << max;
}

void p5(){
    int h = 1;
    int i = 220;
    int j;
    bool endloop = false;

    while(endloop == false){
        j = i*h;
        if((i % 19) == 0 && (i % 18) == 0  && (i % 17) == 0 && (i % 16) == 0 && (i % 15) == 0 && (i % 14) == 0 && (i % 13) == 0 && (i % 12) == 0){
            endloop = true;
        } 
        h++;
    }
    std::cout << i;
}
        
void p6(){
    int sq = 0, s = 0;
    for(int i = 1; i <= 100; i++){
        sq += pow(i, 2);
        s += i;
    }
    s = pow(s, 2);
    std::cout << s - sq;
}

void p7(){
    int count = 2;
    int a = 2;
    int p = 3;
    int num = 0;
    while(count <= 10001){
        if((int)pow(a, p) % p == a){
            num = p;
            count++;
        }
        p+=2;
    }
    std::cout << num;
}

int main(){
    p7();
}