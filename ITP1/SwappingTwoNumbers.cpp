#include <bits/stdc++.h>
using namespace std;

int main()
{
  int x, y;
  cin >> x >> y;
  for (int i = 0; x != 0 || y != 0; i++)
  {
    if(x>y){
      int tmp = x;
      x = y;
      y = tmp;
    }
    cout << x << " " << y << endl;
    cin >> x >> y;
  }
}