#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
typedef long long ll;
using namespace std;
const long double PI = 3.14159265358979323846;
int main()
{
  long double A, B, H, M;
  cin >> A >> B >> H >> M;
  long double tyou = (M * 360.0) / 60.0;
  long double tann = (H * 60.0 + M) * 360 / (12 * 60);
  long double rad = min(360 - abs(tann - tyou), abs(tann - tyou));
  //cout << tyou << " " << tann << endl;
  // cout << rad << endl;
  // cout << cos(PI * rad / 180.0) << endl;
  // cout << A * A + B * B - 2 * B * A * cos(PI * rad / 180.0) << endl;
  long double kaku = cos(PI * rad / 180.0);
  long double ans = sqrt(A * A + B * B - 2.0 * B * A * kaku);
  // cout << ans << endl;
  printf("%.10Lf", ans);
  return 0;
}