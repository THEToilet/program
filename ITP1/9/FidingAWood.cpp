#include <bits/stdc++.h>
#include <sstream>
using namespace std;
int main()
{
  string W;
  string T;
  string s;
  char ch;
  int point = 0;
  int result = 0;
  cin >> W;
  cin >> s;
  while (s != "END_OF_TEXT")
  {
    T += s;
    T += " ";
    cin >> s;
  }

  // すべて小文字にする
  for (int i = 0; i < T.size(); i++)
  {
    if (T.at(i) >= 65 && T.at(i) <= 90)
    {
      char c = T.at(i) + 32;
      T.at(i) = c;
    }
  }

//  cout << W << endl;
//  cout << T << endl;
  // 空白で分離
  istringstream iss(T);
  while (iss >> s)
  {
    if (s.size() != W.size())
    {
      continue;
    }
//    cout << s << "\n";
    for (int i = 0; i < W.size(); i++)
    {
      if (s.at(i) == W.at(i))
      {
        point++;
      }
    }
    if (point == W.size())
    {
      result++;
    }
    point = 0;
  }
  cout << result
       << "\n";
}