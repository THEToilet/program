#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
typedef long long ll;
using namespace std;
int main()
{
  string s1, s2;
  bool answer = true;
  cin >> s1 >> s2;
  if (s1.at(0) == '#')
  {
    if(s2.at(0) == '.' && s1.at(1) == '.'){
      answer = false;
    }
  }
  if (s1.at(1) == '#')
  {
    if(s1.at(0) == '.' && s2.at(1) == '.'){
      answer = false;
    }
  }
  if (s2.at(0) == '#')
  {
    if(s1.at(0) == '.' && s2.at(1) == '.'){
      answer = false;
    }
  }
  if (s2.at(0) == '#')
  {
    if(s1.at(1) == '.' && s2.at(0) == '.'){
      answer = false;
    }
  }

  if (answer)
  {
    cout << "Yes" << endl;
  }
  else
  {
    cout << "No" << endl;
  }
  return 0;
}