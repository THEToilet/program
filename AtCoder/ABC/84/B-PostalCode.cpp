#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
typedef long long ll;
using namespace std;
int main()
{
  int A, B;
  cin >> A >> B;
  string S;
  cin >> S;
  rep(i, A)
  {
    if (S.at(i) < 48 || S.at(i) > 57)
    {
      cout << "No" << endl;
      return 0;
    }
  }
  if (S.at(A) != '-')
  {
    cout << "No" << endl;
    return 0;
  }
  for (int i = A + 1; i < A + B + 1; i++)
  {
    if (S.at(i) < 48 || S.at(i) > 57)
    {
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;
  return 0;
}