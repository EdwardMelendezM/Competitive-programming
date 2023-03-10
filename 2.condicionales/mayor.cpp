#include <iostream>

using namespace std;

int main(){
  int n,min=-999,a;
  cin >> n;
  while(n--){
  cin >> a;
    if(a>min){
      min=a;
    }
  }
  cout << min;

  return 0;
}