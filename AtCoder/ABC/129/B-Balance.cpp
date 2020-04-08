#include <bits/stdc++.h>
using namespace std;
int main()
{
  int N;
  int min = 0;
  cin >> N;
  vector<int> W;
  for (int i = 0; i < N; i++)
  {
    int a;
    cin >> a;
    W.push_back(a);
  }
  for (int i = 1; i <= N; i++)
  {
    int r = 0, l = 0;
    for (int j = 0; j <= i - 1; j++)
    {
      r += W.at(j);
    }
    for (int k = i; k < N; k++)
    {
      l += W.at(k);
    }
    //cout << "r" << r << endl;
    //cout << "l" << l << endl;
    //cout << "abs" << abs(l - r) << endl;

    if (i == 1)
    {
      min = abs(l - r);
    }
    else if (abs(l - r) < min)
    {
      min = abs(l - r);
    }
  }

  cout << min << endl;
}