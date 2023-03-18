#include <iostream>

int valueOf(char const &ch)
{
  if (ch == '.')
    return 1;
  return 0;
}

int main()
{
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  char a[4][4]{};
  for (int8_t r{}; r < 4; ++r)
    for (int8_t c{}; c < 4; ++c)
      std::cin >> a[r][c];

  for (int8_t r{}; r < 3; ++r)
    for (int8_t c{}; c < 3; ++c)
    {
      int const &rs{valueOf(a[r][c]) + valueOf(a[r][c + 1]) + valueOf(a[r + 1][c]) + valueOf(a[r + 1][c + 1])};
      if (rs != 2)
      {
        std::cout << "YES\n";
        return 0;
      }
    }

  std::cout << "NO\n";
}