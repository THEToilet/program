#include <bits/stdc++.h>
using namespace std;
int main()
{
  int N;
  cin >> N;
  vector<int> p;
  int point = 0;
  for (int i = 1; i < N + 1; i++)
  {
    int a;
    cin >> a;
    if (a != i)
    {
      point++;
    }
  }
  if (point == 2 || point == 0)
  {
    cout << "YES" << endl;
  }
  else
  {
    cout << "NO" << endl;
  }
}