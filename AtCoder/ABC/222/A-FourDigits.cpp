#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
typedef long long ll;
using namespace std;
int main()
{
  string N;
  cin >> N;
  if (N.size() == 4)
  {
    cout << N << endl;
  }
  else if (N.size() == 3)
  {
    cout << "0" + N << endl;
  }
  else if (N.size() == 2)
  {
    cout << "00" + N << endl;
  }
  else if (N.size() == 1)
  {

    cout << "000" + N << endl;
  }

  return 0;
}