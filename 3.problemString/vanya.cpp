#include <iostream>
#include <string>

using namespace std;

int main()
{
  int n, m = 1, c = 0;
  cin >> n;
  for (int i = 1; m <= n; i++)
  {
    m = (i * i + i) / 2;
    if (m > n)
      break;
    n = n - m;
    c++;
  }
  cout << c << endl;

  return 0;
}