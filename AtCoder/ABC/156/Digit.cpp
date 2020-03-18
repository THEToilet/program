#include <bits/stdc++.h>
using namespace std;
int main()
{
  long long int N;
  int  K, point = 1;
  cin >> N >> K;
  while (1)
  {
    N = N / K;
    if (N == 0)
    {
      break;
    }
    point++;
  }
  cout << point << endl;
}