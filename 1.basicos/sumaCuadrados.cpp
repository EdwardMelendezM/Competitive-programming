#include <iostream>

using namespace std;

int main(){
  int n, suma = 0, a;
  cin >> n;
  while(n--){
    cin >> a;
    suma += a*a;
  }
  cout << suma;
}