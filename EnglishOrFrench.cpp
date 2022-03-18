// Example program
#include <iostream>
#include <string>

using namespace std;
int main(){
  string a;
  char c;
  int b, t, s;
  cin >> b;
  s = 0;
  t = 0;
  for(int i = 0; i <= b; i++){
    getline(cin, a);
    for(int j = 0; j < a.length(); j++){
      c = a[j];
      switch(c){
        case 'T':
          t++;
        break;
        case 't':
          t++;
        break;
        case 'S':
          s++;
        break;
        case 's':
          s++;
        break;
      }
    }
  }
  if(t > s){
    cout << "English";
  }else{
    cout << "French";
  }
  
}