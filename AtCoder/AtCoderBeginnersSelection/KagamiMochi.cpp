#include <bits/stdc++.h>
using namespace std;
int main()
{
  int N;
  int mix;
  int mixN;
  cin >> N;
  int od = 0;
  vector<int> d;
  vector<int> nd;
  for (int i = 0; i < N; i++)
  {
    int a;
    cin >> a;
    d.push_back(a);
  }
  for (int j = 0; j < N; j++)
  {
    for (int i = 0; i < N; i++)
    {
      if (i == 0)
      {
        mix = d.at(i);
        mixN = 0;
      }
      if (mix < d.at(i))
      {
        mix = d.at(i);
        mixN = i;
      }
    }
    nd.push_back(mix);
    d.at(mixN) = 1000;
  }
  cout << nd.size() << endl;
}