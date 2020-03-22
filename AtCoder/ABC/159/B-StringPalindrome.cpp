#include <bits/stdc++.h>
using namespace std;
int main()
{
  string s;
  cin >> s;
  string s1, s2, s3, s4, s5;
  s1 = s;
  int N = s.size();
  reverse(begin(s), end(s));
  if (s1 == s)
  {
    s2 = s1.substr(0, (N - 1) / 2);
    s3 = s2;
    reverse(begin(s2), end(s2));
    if (s2 == s3)
    {
      s4 = s3.substr((N + 3)/2-2, N -(N + 3)/2-2);
      s5 = s4;
      reverse(begin(s4), end(s4));
      if (s5 == s4)
      {
        cout << "Yes" << endl;
        return 0;
      }
    }
  }
  cout << "No" << endl;
}