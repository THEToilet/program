#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
int main()
{
  int N, M;
  cin >> N >> M;
  vector<int> WA(N);
  vector<bool> AC(N);
  int WAnum = 0;
  int ACnum = 0;
  rep(i, N)
  {
    WA[i] = 0;
    AC[i] = false;
  }
  while (M--)
  {
    int p;
    string S;
    cin >> p >> S;
    if (AC[p])
    {
      continue;
    }
    if (S == "AC")
    {
      AC[p] = true;
      ACnum++;
      WAnum += WA[p];
    }
    else if (S == "WA")
    {
      WA[p]++;
    }
  }
  cout << ACnum << " " << WAnum << endl;
}