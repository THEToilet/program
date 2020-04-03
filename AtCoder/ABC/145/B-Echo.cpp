#include <bits/stdc++.h>
using namespace std;
int main()
{
  int N;
  string S;
  cin >> N >> S;
  string S2 = S.substr(0, N / 2);
//  cout << S2 << endl;
  if (S == S2+S2)
  {
    cout << "Yes" << endl;
  }
  else
  {
    cout << "No" << endl;
  }
}