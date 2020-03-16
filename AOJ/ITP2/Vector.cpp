#include <bits/stdc++.h>
using namespace std;
int main()
{
  int q;
  vector<int> p;
  int order;
  int x;
  cin >> q;
  for (int i = 0; i < q; i++)
  {
    cin >> order;
    switch (order)
    {
    case (0):
      cin >> x;
      p.push_back(x);
      break;
    case (1):
      cin >> x;
      cout << p.at(x) << endl;
      break;
    case (2):
      p.pop_back();
      break;
    }
  }
}