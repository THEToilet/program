#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  string taro, hanako;
  int t = 0, h = 0;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    cin >> taro;
    cin >> hanako;
    if (taro == hanako)
    {
      t++;
      h++;
    }
    else if (taro > hanako)
    {
      t += 3;
    }
    else if (taro < hanako)
    {
      h += 3;
    }
  }
  cout << t << " " << h << "\n";
}