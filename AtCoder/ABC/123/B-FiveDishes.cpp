#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
int main()
{
  vector<int> A(5);
  cin >> A[0] >> A[1] >> A[2] >> A[3] >> A[4];
  vector<int> P = {0, 1, 2, 3, 4};
  int final_answer = 1e9;
  do
  {
    int ans = 0;
    for (int i = 0; i < 5; i++)
    {
      while (ans % 10 != 0)
      {
        ans += 1; // 10の倍数になるまで
      }
      ans += A[P[i]];
    }
    final_answer = min(final_answer, ans);
  } while (next_permutation(P.begin(), P.end()));

  cout << final_answer << endl;
  return 0;
}