#include <bits/stdc++.h>
using namespace std;

int main()
{
  int r, c;
  int sum = 0;
  int allsum = 0;
  int table[101][101];
  cin >> r >> c;
  for (int i = 0; i < 101; i++)
  {
    for (int k = 0; k < 101; k++)
    {
      table[i][k] = 0;
    }
  }
  for (int i = 0; i < r; i++)
  {
    for (int j = 0; j < c; j++)
    {
      cin >> table[i][j];
    }
  }
  for (int i = 0; i < r; i++)
  {
    for (int j = 0; j < c; j++)
    {
      sum += table[i][j];
      cout << table[i][j] << " ";
    }
    cout << sum;
    sum = 0;
    cout << endl;
  }
  for (int i = 0; i < c; i++)
  {
    for (int j = 0; j < r; j++)
    {
      sum += table[j][i];
    }
    cout << sum << " ";
    allsum += sum;
    sum = 0;
  }
  cout << allsum << endl;;
}