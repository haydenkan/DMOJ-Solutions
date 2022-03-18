#include <iostream>
#include <string>
#include <math.h>
#include <vector>
#include <stdlib.h>

int stuff(int friends[], int c, int n){
    int k, total = 0;
    for(int i = 0; i < 3 * n; i += 3){
        if(friends[i] > c){
            k = c + friends[i + 2];
        }else{
            k = c - friends[i + 2];
        }
        total += abs(k - friends[i]) * friends[i + 1];
        /*
        temp = abs(k - friends[i]) * friends[i + 1];
        if(temp > max){
            max = temp;
        }
        */
    }
    return total;
}

int search(int friends[], int n, int l, int r){
    int m = (l + r) / 2;
    if(stuff(friends, m, n) > stuff(friends, l, n)){
        return search(friends, n, l, m);
    }else if(stuff(friends, m, n) > stuff(friends, r, n)){
        return search(friends, n, m, r);
    }
    return stuff(friends, m, n);
}
  
int main(){
    int n, l = 1000000001, r = -1;
    std::cin >> n;
    int friends[3*n] = {1};
    for(int i = 0; i < n * 3; i+=3){
        std::cin >> friends[i] >> friends[i + 1] >> friends[i + 2];
        if(friends[i] > r){
            r = friends[i];
        }
        if(friends[i] < l){
            l = friends[i];
        }
    }
    std::cout << search(friends, n, l, r);
    
}

