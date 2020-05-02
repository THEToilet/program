#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
typedef long long ll;
using namespace std;
int main()
{
  int N, A, B;
  cin >> N >> A >> B;
  int sum = 0;
  for (int i = 1; i <= N; i++)
  {
    string tmp = to_string(i);
    int t = 0;
    rep(j, tmp.size())
    {
      t += tmp.at(j)-48;
    }
    //cout << t << endl;
    if (t >= A && t <= B)
    {
      sum += i;
    }
  }
  cout << sum << endl;
  return 0;
}