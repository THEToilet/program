#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
typedef long long ll;
using namespace std;
int main()
{
  int N;
  cin >> N;
  for (int i = 3; i > 0; i--)
  {
    //cout << pow(60, i - 1) << endl;
    int tmp = N / pow(60, i - 1);
    printf("%02d", tmp);
    N = N - pow(60, i - 1) * tmp;
    if (i == 3 || i == 2)
    {
      cout << ":";
    }
  }
  cout << endl;
  return 0;
}