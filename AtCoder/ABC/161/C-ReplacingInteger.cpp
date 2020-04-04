#include <bits/stdc++.h>
using namespace std;
int main()
{
  long long int N, K;
  long long int min;
  long long int a;
  cin >> N >> K;
  min = N;
  if (N == 0)
  {
    cout << 0 << endl;
  }
  else if (N == K)
  {
    cout << 0 << endl;
  }
  else if (N < K)
  {
    for (int i = 0;; i++)
    {
      a = abs(N - (K * i));
      //cout << a << endl;
      if (a == 0)
      {
        cout << 0 << endl;
        return 0;
      }
      else if (a > min)
      {
        cout << abs(N - K * (i - 1)) << endl;
        return 0;
      }
      min = a;
    }
  }
  else
  {
    long long int s;
    s = N / K;
    //cout << s << endl;
    for (long long int i = s;; i++)
    {
      a = abs(N - (K * i));
      //cout << a << endl;
      if (a == 0)
      {
        cout << 0 << endl;
        return 0;
      }
      else if (a > min)
      {
        cout << abs(N - K * (i - 1)) << endl;
        return 0;
      }
      min = a;
    }
  }
}