#include <iostream>
#include <vector>
#include <cmath>

int main(){
    int n;
    std::vector<int> output;
    std::vector<int> input;
    std::cin >> n;
    int g = pow(2, n)-1, in;
    for(int i = 0; i < g; i++){
        std::cin >> in;
        input.push_back(in);
    }
    for(int i = 0; i < n; i++){
        for(int k = input.size(); k > 0; k-=2){
            output.emplace_back(input.at(k-1));
            input.erase(input.begin()+k-1);
        }
    }
    for(int i = 0; i < n; i++){
        int f = output.size();
        for(int k = 0; k < pow(2, i); k++){
            std::cout << output.at(f-k-1) << " ";
            output.erase(output.end()-1);
        }
        std::cout << std::endl;
    }
}