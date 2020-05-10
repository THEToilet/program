#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
typedef long long ll;
using namespace std;
int main()
{
  int N, M, X;
  cin >> N >> M >> X;
  vector<int> C(N), co(M);
  vector<vector<int>> A(N, vector<int>(M));
  rep(i, N)
  {
    rep(j, M + 1)
    {
      if (j == 0)
      {
        cin >> C[i];
      }
      else
      {
        int tmp;
        cin >> tmp;
        A.at(i).at(j - 1) = tmp;
        co[j - 1] += tmp;
      }
    }
  }
  int count = 0;
  rep(i, M)
  {
    if (co[i] >= X)
    {
      count++;
    }
  }

  if (count == M)
  {
    vector<int> P(N);
    rep(i, N)
    {
      P[i] = i;
    }
    int ans = 100000000;
    do
    {
      vector<int> con(M);
      int tmp = 0;
      rep(i, N)
      {
        rep(j, M)
        {
          con[j] += A.at(P[i]).at(j);
        }
        tmp += C[P[i]];
        int ccc = 0;
        rep(i, M)
        {
          if (con[i] >= X)
          {
            ccc++;
          }
        }
        if (ccc == M)
        {
          ans = min(ans, tmp);
          /*//printf("%d\n", ans);
          //printf("%d\n", tmp);
          if (ans == 1067)
          {
            rep(i, N)
            {
              printf("%d", P[i]);
            }
            return 0;
          }
          // cout << "\n";*/
          break;
        }
      }
    } while (next_permutation(P.begin(), P.end()));
    printf("%d\n", ans);
  }
  else
  {
    printf("-1\n");
  }

  return 0;
}