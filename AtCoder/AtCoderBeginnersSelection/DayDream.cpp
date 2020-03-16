#include <bits/stdc++.h>
using namespace std;
int main()
{
  string daydream[4] = {"dream", "dreamer", "erase", "eraser"};
  string S;
  string T = "";
  cin >> S;
  reverse(S.begin(), S.end());
  for (int i = 0; i < 4; i++)
  {
    reverse(daydream[i].begin(), daydream[i].end());
  }
  if()
  cout << "YES" << endl;
  cout << "NO" << endl;
}