#include <bits/stdc++.h>
#include <algorithm>
#define rep(i, n) for (int i = 0; i < (n); i++)
typedef long long ll;
using namespace std;

ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }

int main()
{
  int K;
  long int sum = 0;
  cin >> K;
  for (int i = 1; i <= K; i++)
  {
    for (int j = 1; j <= K; j++)
    {
      for (int k = 1; k <= K; k++)
      {
        sum += gcd(gcd(i, j), k);
      }
    }
  }
  cout << sum << endl;
}
