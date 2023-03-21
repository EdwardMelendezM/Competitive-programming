#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
  string s;
  cin >> s;

  vector<int> sumandos;
  int n = s.size();
  for (int i = 0; i < n; i += 2)
  {
    sumandos.push_back(s[i] - '0');
  }

  sort(sumandos.begin(), sumandos.end());

  n = sumandos.size();
  string nueva_suma = to_string(sumandos[0]);
  for (int i = 1; i < n; i++)
  {
    nueva_suma += '+';
    nueva_suma += to_string(sumandos[i]);
  }

  cout << nueva_suma << endl;

  return 0;
}