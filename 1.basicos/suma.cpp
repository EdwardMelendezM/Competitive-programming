#include <iostream>

using namespace std;

int main(){
  int n,a,suma=0;
  cin >> n;
  while(n--){
    cin >> a;
    suma += a;
  }
  cout << suma;

  return 0;
}