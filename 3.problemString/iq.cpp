#include <iostream>
using namespace std;

int transOf(char &str)
{
  if (str == '.')
  {
    return 1;
  }
  return 0;
}
int main()
{
  char array[4][4];
  int value = 0;
  for (int i = 0; i < 4; i++)
  {
    for (int j = 0; j < 4; j++)
    {
      cin >> array[i][j];
    }
  }
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      value = (transOf(array[i][j]) + transOf(array[i][j + 1]) + transOf(array[i + 1][j]) + transOf(array[i + 1][j + 1]));
      if (value != 2)
      {
        cout << "YES\n";
        return 0;
      }
    }
  }
  cout << "NO\n";
}