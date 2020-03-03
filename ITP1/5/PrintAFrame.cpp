#include <bits/stdc++.h>
#include <string>
using namespace std;

int main()
{
  int H, W;
  string top = "";
  string naka = "";
  cin >> H >> W;
  while (H != 0 && W != 0)
  {
    for (int j = 0; j < W; j++)
    {
      top += "#";
      if (j == 0 || j == (W - 1))
      {
        naka += "#";
      }
      else
      {
        naka += ".";
      }
    }

    for (int i = 0; i < H; i++)
    {
      if (i == 0 || i == (H - 1))
      {
        cout << top << endl;
      }
      else
      {
        cout << naka << endl;
      }
    }
    printf("\n");
    top = "";
    naka = "";
    cin >> H >> W;
  }
}