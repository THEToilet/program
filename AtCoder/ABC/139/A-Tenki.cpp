#include <bits/stdc++.h>
using namespace std;
int main()
{
  string S, T;
  int point = 0;
  cin >> S >> T;
  for (int i = 0; i < 3; i++)
  {
    if (S.at(i) == T.at(i))
    {
      point++;
    }
  }
  cout << point << endl;
}