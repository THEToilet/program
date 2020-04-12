#include <bits/stdc++.h>
#include <algorithm>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;

long long int facctorialMethod(int k)
{
  long long int sum = 1;
  for (int i = 1; i <= k; ++i)
  {
    sum *= i;
    //cout << sum << endl;
  }
  return sum;
}

int main()
{
  int K;
  cin >> K;
  /*
  map<string, int> ans;
  for (int i = 1; i <= K; i++)
  {
    for (int j = 1; j <= K; j++)
    {
      for (int k = 1; k <= K; k++)
      {
        vector<int> P = {i, j, k};
        do
        {
          string s = to_string(P.at(0)) + to_string(P.at(1)) + to_string(P.at(2));
          if (ans[s] != 0)
          {
            continue;
          }
          else
          {
            cout << P.at(0) << " " << P.at(1) << " " << P.at(2) << endl;
            long int tmp = __gcd((__gcd(P.at(0), P.at(1))), P.at(2));
            cout << tmp << endl;
            answer += tmp;
            ans[s] = answer;
          }
          //cout << answer << endl;
        } while (next_permutation(P.begin(), P.end()));
      }
    }
  }*/

  long long int ans = 0;
  for (int i = 1; i <= K; i++)
  {
    ans += i;
  }
  cout << ans << endl;
  cout << 6 * (K + 1) << endl;
  cout << ans + 6 * (K + 1) << endl;
}
