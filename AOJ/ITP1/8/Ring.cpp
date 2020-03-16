#include <bits/stdc++.h>
using namespace std;
int main()
{
  string p;
  string s;
  int point;
  getline(cin, p);
  getline(cin, s);
  for (int j = 0; j < p.size(); j++)
  {
    for (int i = 0; i < s.size(); i++)
    {
      // cout << p.at((i+j)%(p.size())) << " " << s.at(i) << "\n";
      if (p.at((i + j) % (p.size())) == s.at(i))
      {
        point++;
      }
    }
    if (point == s.size())
    {
      cout << "Yes"
           << "\n";
      return 0;
    }
    // cout << "------" << "\n";
    point = 0;
  }
  cout << "No"
       << "\n";
}