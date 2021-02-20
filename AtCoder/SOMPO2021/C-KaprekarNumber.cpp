#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
typedef long long ll;
using namespace std;
int main()
{
  string N, K;
  cin >> N >> K;
  string temp = N;
  // cout << N << K << temp << endl;
  rep(i, atoi(K.c_str()))
  {
    string g1 = temp, g2 = temp;
    sort(g1.begin(), g1.end());
    sort(g2.begin(), g2.end(), greater<char>{});
    int uu;
    // cout << "g1:" << g1 << "g2:" << g2 << endl;
    uu = atoi(g2.c_str()) - atoi(g1.c_str());
    temp = to_string(uu);
    //  cout << "ddd " + temp << endl;
  }
  cout << temp << endl;
  return 0;
}
