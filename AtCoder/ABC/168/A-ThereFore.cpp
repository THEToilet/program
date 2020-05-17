#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
typedef long long ll;
using namespace std;
int main()
{
  string N;
  cin >> N;
  char tmp = N.back();
  // cout << tmp << endl;
  if (tmp == '2' || tmp == '4' || tmp == '5' || tmp == '7' || tmp == '9')
  {
    cout << "hon" << endl;
  }
  else if (tmp == '0' || tmp == '1' || tmp == '6' || tmp == '8')
  {
    cout << "pon" << endl;
  }
  else
  {
    cout << "bon" << endl;
  }
  return 0;
}