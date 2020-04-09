#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
int main()
{
  map<string, int> memo;
  int N;
  cin >> N;
  rep(i, N)
  {
    string s;
    cin >> s;
    memo[s] += 1;
  }

  int maxv = 0;
  // ? こぴぺ　mapでは昇順でソートされてるらしい
  for (const auto &x : memo)
  {
    int v = x.second;
    if (v > maxv)
      maxv = v;
  }
  for (auto it = memo.begin(); it != memo.end(); it++)
  {
    if (it->second == maxv)
    {
      cout << it->first << endl;
    }
  }
}