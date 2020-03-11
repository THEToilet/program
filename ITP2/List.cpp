#include <bits/stdc++.h>
using namespace std;
int main()
{
  int q;
  int order;
  int x;
  list<int> li;
  auto itr = li.begin();
  cin >> q;
  for (int i = 0; i < q; i++)
  {
    cin >> order;
    switch (order)
    {
    case (0):
      cin >> x;
      li.insert(itr, x);
      *itr -= 1;
      break;
    case (1):
      cin >> x;
      itr -= x;
      break;
    case (2):
      li.erase(itr);
      if (itr++ > li.size())
      {
        itr = li.end();
      }
      else
      {
        *itr++;
      }
      break;
    }
  }
  while (li.empty())
  {
    cout << *itr;
    li.pop_front;
    itr++;
  }
  cout << "\n";
}