#include <bits/stdc++.h>
using namespace std;
int main()
{
  string s;
  int point = 0;
  cin >> s;
  for (int i = 0; i < 3; i++)
  {
    if (s.at(i) == '1')
    {
      point++;
    }
  }
  cout << point << "\n";
}