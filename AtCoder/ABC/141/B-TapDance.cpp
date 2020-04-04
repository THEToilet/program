#include <bits/stdc++.h>
using namespace std;
int main()
{
  string S;
  int ans = 0;
  cin >> S;
  for (int i = 0; i < S.size(); i++)
  {
    char a = S.at(i);
    if (i % 2 == 0)
    {
      if (a == 'L')
      {
        cout << "No" << endl;
        return 0;
      }
    }
    else
    {
      if (a == 'R')
      {
        cout << "No" << endl;
        return 0;
      }
    }
  }

  cout << "Yes" << endl;
}