#include <bits/stdc++.h>
using namespace std;

int main()
{
  string x;
  int sum = 0;
  cin >> x;
  while (x != "0")
  {
    for (int i = 0; i < x.size(); i++)
    {
      sum += x.at(i) - 48;
    }
    cout << sum << endl;
    sum = 0;
    cin >> x;
  }
}