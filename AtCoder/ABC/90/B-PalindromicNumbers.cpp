#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
typedef long long ll;
using namespace std;
int main()
{
  int A, B;
  cin >> A >> B;
  int r = 0;
  for (int i = A; i <= B; i++)
  {
    string s = to_string(i);
    //cout << s << endl;
    if ((s.at(0) == s.at(4)) && (s.at(1) == s.at(3)))
    {
      r++;
    }
  }
  cout << r << endl;
  return 0;
}