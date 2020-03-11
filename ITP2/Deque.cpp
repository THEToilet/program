#include <bits/stdc++.h>
using namespace std;
int main()
{
  int q;
  int order;
  int x;
  int d;
  deque<int> deq;
  cin >> q;
  for (int i = 0; i < q; i++)
  {
    cin >> order;
    switch (order)
    {
    case (0):
      cin >> d;
      cin >> x;
      if (d == 1)
      {
        deq.push_back(x);
      }
      else
      {
        deq.push_front(x);
      }
      break;
    case (1):
      cin >> x;
      cout << deq.at(x) << endl;
      break;
    case (2):
      cin >> d;
      if (d == 1)
      {
        deq.pop_back();
      }
      else
      {
        deq.pop_front();
      }
      break;
    }
  }
}