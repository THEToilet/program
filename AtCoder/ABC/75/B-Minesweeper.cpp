#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
typedef long long ll;
using namespace std;
int main()
{
  int H, W;
  cin >> H >> W;
  vector<string> board(H);
  rep(i, H)
  {
    cin >> board[i];
  }

  int dx[8] = {1, 0, -1, 0, 1, -1, -1, 1};
  int dy[8] = {0, 1, 0, -1, 1, 1, -1, -1};

  for (int i = 0; i < H; ++i)
  {
    for (int j = 0; j < W; ++j)
    {
      if (board[i][j] == '#')
        continue;
      int num = 0;
      for (int d = 0; d < 8; ++d)
      {
        int ni = i + dy[d];
        int nj = j + dx[d];
        if (ni < 0 || H <= ni)
          continue;
        if (nj < 0 || W <= nj)
          continue;
        if (board[ni][nj] == '#')
          num++;
      }
      board[i][j] = char(num + '0');
    }
  }
  for (int i = 0; i < H; ++i)
    cout << board[i] << endl;
  return 0;
}