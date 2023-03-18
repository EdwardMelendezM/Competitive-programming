#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, count = 1;
  string a, temp;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    cin >> a;
    if (i == 0)
    {
      temp = a;
      continue;
    }
    if (temp[1] == a[0])
    {
      count++;
    }
    temp = a;
  }
  cout << count << endl;
  return 0;
}