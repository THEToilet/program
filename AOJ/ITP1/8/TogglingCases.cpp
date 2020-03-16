#include <bits/stdc++.h>
using namespace std;

int main()
{
  string s = "";
  getline(cin, s);
  for (int i = 0; i < s.size(); i++)
  {
    if (s.at(i) == ' ')
    {
      cout << " ";
    }
    else if (s.at(i) == ',')
    {
      cout << ',';
    }
    else if (s.at(i) == '.')
    {
      cout << '.';
    }
    else if (s.at(i) >= 65 && s.at(i) <= 90)
    {
      char c = s.at(i) + 32;
      cout << c;
    }
    else if (s.at(i) >= 97 && s.at(i) <= 122)
    {
      char c = s.at(i) - 32;
      cout << c;
    }
    else
    {
      cout << s.at(i);
    }
  }
  cout << endl;
}