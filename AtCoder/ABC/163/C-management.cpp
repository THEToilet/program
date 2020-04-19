#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
typedef long long ll;
using namespace std;
int main()
{
  long N;
  cin >> N;
  //unordered_map<string, int> mp;
  vector<int> A(N);
  rep(i, N)
  {
    A[i] = 0;
  }
  for (int i = 1; i < N; i++)
  {
    int a;
    cin >> a;
    A[a-1] += 1;
  }
  //sort(mp.rbegin(), mp.rend());
  rep(i,N)
  {
    cout << A[i] << endl;
  }
  return 0;
}