#include <bits/stdc++.h>
using namespace std;
int main()
{
  string daydream[4] = {"dream", "dreamer", "erase", "eraser"};
  string S;
  cin >> S;
  reverse(S.begin(), S.end());
  for (int i = 0; i < 4; i++)
  {
    reverse(daydream[i].begin(), daydream[i].end());
  }
  bool is = true;
  for (int i = 0; i < S.size();)
  {
  bool isDiv = false;
    for (int j = 0; j < 4; j++)
    {
      string tmp = daydream[j];
      if (S.substr(i, tmp.size()) == tmp)
      {
        isDiv = true;
        i += tmp.size();
      }
    }
    if (!isDiv)
    {
      is = false;
      break;
    }
  }
  if (is)
  {
    cout << "YES" << endl;
  }
  else
  {
    cout << "NO" << endl;
  }
}