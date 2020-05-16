#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
typedef long long ll;
using namespace std;
int main()
{
  int N;
  cin >> N;
  map<int, int> a;
  int mini = 0;
  rep(i, N)
  {
    int tmp;
    cin >> tmp;
    if (tmp >= 3200)
    {
      mini++;
    }
    else
    {
      a[tmp / 400]++;
    }
  }
  int Min = max(1, (int)a.size());
  int maxi = a.size() + mini;
  cout << Min << " " << maxi << endl;
  return 0;
}