#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
typedef long long ll;
using namespace std;
int main()
{
  int n;
  cin >> n;
  int a[9] = {0, 1, 0, 1, 2, 3, 0, 1, 0};
  int sum = 0;
  rep(i, n)
  {
    int index;
    cin >> index;
    sum += a[index - 1];
  }
  cout << sum << endl;
  return 0;
}