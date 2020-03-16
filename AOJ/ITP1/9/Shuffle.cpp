#include <bits/stdc++.h>
using namespace std;
int main()
{
  string s = "";
  int m, h;
  cin >> s;
  while (s != "-")
  {
    cin >> m;
    for (int i = 0; i < m; i++)
    {
      cin >> h;
      for (int j = 0; j < h; j++)
      {
        char g = s.at(0);
        s = s.substr(1, s.size() - 1) + g;
      }
    }
    cout << s << endl;

    cin >> s;
  }
}
