#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
int main()
{
  int N;
  string S;
  string tmpS;
  cin >> N >> S;
  rep(i, N)
  {
    char tmp;
    if (i == 0)
    {
      tmp = S.at(i);
      //cout << tmp;
      tmpS += tmp;
    }
    else if (S.at(i) != tmp)
    {
      tmp = S.at(i);
      //cout << tmp;
      tmpS += tmp;
    }
    //cout << tmp;
  }
  cout << tmpS.size() << "\n";
}