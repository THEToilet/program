#include <bits/stdc++.h>
using namespace std;
int main()
{
  int N, K, M;
  int A;
  int sum = 0;
  cin >> N >> K >> M;
  for (int i = 0; i < N - 1; i++)
  {
    int A;
    cin >> A;
    sum += A;
  }
  //cout << sum << endl;
  int B = M * N - sum;
  //cout << B << endl;
  if (B < 0)
  {
    cout << 0 << endl;
  }
  else if (B > K)
  {
    cout << -1 << endl;
  }
  else
  {
    cout << B << endl;
  }
}