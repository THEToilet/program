#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
typedef long long ll;
using namespace std;
int main()
{
  int H1, M1, H2, M2, K;
  cin >> H1 >> M1 >> H2 >> M2 >> K;
  int h, m;




  
  h = (H2 - H1) * 60;
  m = (M2 - M1) - 1;
  if (H2 < H1)
  {
    h = (24 + H2 - H1) * 60;
    cout << ((h + m) / K) * K << endl;
  }
  else
  {
    cout << ((h + m) / K) * K << endl;
  }
  return 0;
}