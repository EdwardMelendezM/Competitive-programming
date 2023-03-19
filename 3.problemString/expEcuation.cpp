// https://codeforces.com/problemset/problem/1787/A
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define arrayLen(array) sizeof(array) / sizeof(array[0])
void fastIO()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
}
void solve()
{
  ll n;
  cin >> n;
  if (n % 2 != 0)
  {
    cout << -1 << endl;
  }
  else
  {
    cout << 1 << " " << n / 2 << endl;
  }
}
int main()
{
  fastIO();
  int t;
  cin >> t;
  while (t--)
  {
    solve();
  }
  return 0;
}