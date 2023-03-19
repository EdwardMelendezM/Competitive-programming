#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    int ans = 0;
    for (int i = 1; i <= 30; i++)
    {
      int val = (1 << i) - 1;
      int rem = (val * (val + 1)) / 2;
      if (n >= rem)
      {
        n -= rem;
        ans++;
      }
    }
    cout << ans << endl;
  }
  return 0;
}