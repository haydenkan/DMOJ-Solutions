#include <bits/stdc++.h>
#include <iostream>

long long int n;

long long int calcSum(long long int friendP[], long long int friendW[], long long int friendD[], long long int pos){
    long long int sum = 0;
    for(int i = 0; i < n; i++){
        if(friendP[i] < pos){
            if(pos - friendP[i] - friendD[i] > 0){
                sum += (pos - friendP[i] - friendD[i]) * friendW[i];
            }
        }else{
            if((friendP[i] - (pos + friendD[i])) > 0){
            sum += (friendP[i] - (pos + friendD[i])) * friendW[i];
            }
        }
    }
    return sum;
}

long long int binarySearch(long long int friendP[], long long int friendW[],long long  int friendD[], long long int left, long long int mid, long long int right){
    long long int l, m, r;
    l = calcSum(friendP, friendW, friendD, mid - 1);
    m = calcSum(friendP, friendW, friendD, mid);
    r = calcSum(friendP, friendW, friendD, mid + 1);
    if(m < l && m < r){
        return m;
    }else if(l < m){
        return binarySearch(friendP, friendW, friendD, left, (left + mid)/2, mid);
    }else if(r < m){
        return binarySearch(friendP, friendW, friendD, mid, (mid + right)/2, right);
    }
    if(l == m && m == r){
        return m;
    }
    return 0;

}

int main(){
    std::cin >> n;
    long long int max = 0;
    long long int friendP[n], friendW[n], friendD[n];
    for(long long int i = 0; i < n; i++){
        std::cin >> friendP[i] >> friendW[i] >> friendD[i];
        if(friendP[i] > max){
            max = friendP[i];
        }
    }
    std::cout << binarySearch(friendP, friendW, friendD, 0, max/2, max);
}