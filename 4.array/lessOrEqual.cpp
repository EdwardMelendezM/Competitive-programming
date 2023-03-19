#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);

  int n, k;
  cin >> n >> k;
  long long a[200002];
  for (int i = 1; i <= n; i++)
    cin >> a[i];
  a[0] = 1;
  a[n + 1] = 1000000001;

  sort(a + 1, a + n + 1);
  int id = 0;
  while (true)
  {
    while (a[id] == a[id + 1])
      id++;
    if (id == k)
    {
      cout << a[id] << '\n';
      return 0;
    }
    if (id > k)
    {
      cout << -1 << '\n';
      return 0;
    }
    id++;
  }
}