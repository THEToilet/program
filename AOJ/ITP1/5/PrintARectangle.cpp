#include <bits/stdc++.h>
#include <string>
using namespace std;

int main()
{
  int H, W;
  string s = "";
  cin >> H >> W;
  while (H != 0 && W != 0)
  {
    for (int j = 0; j < W; j++)
    {
      s += "#";
    }
    for (int i = 0; i < H; i++)
    {
      cout << s << endl;
    }
    printf("\n");
    s = "";
    cin >> H >> W;
  }
}