#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
typedef long long ll;
using namespace std;
int main()
{
  int N;
  cin >> N;
  vector<pair<int, int>> a(N), b(N);
  rep(i, N)
  {
    a.at(i).first = i;
    b.at(i).first = i;
    cin >> a.at(i).second >> b.at(i).second;
  }
  std::sort(a.begin(), a.end(), [](auto &left, auto &right) {
    return left.second < right.second;
  });
  std::sort(b.begin(), b.end(), [](auto &left, auto &right) {
    return left.second < right.second;
  });

  if (a.at(0).first == b.at(0).first)
  {
    int result = a.at(0).second + b.at(0).second;
    int result1 = min(a.at(1).second, b.at(1).second);
    int unko = min(a.at(0).second, b.at(0).second);
    int ans = min(result, max(result1, unko));
    cout << ans << endl;
  }
  else
  {
    cout << max(a.at(0).second, b.at(0).second) << endl;
  }
  return 0;
}